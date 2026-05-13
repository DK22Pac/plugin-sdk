console.log("File contents validation:");

const fs = require("fs");
const path = require("path");

const isGithubWorkflow = process.argv.includes("github");

let result = true;
result &= processDir("examples");
result &= processDir("shared");
result &= processDir("plugin_II");
result &= processDir("plugin_III");
result &= processDir("plugin_vc");
result &= processDir("plugin_sa");
result &= processDir("plugin_IV");
result &= processDir("plugin_iii_unreal");
result &= processDir("plugin_vc_unreal");
result &= processDir("plugin_sa_unreal");
//processFile("./plugin_IV/game_IV/rage/grcImage.h");

console.log();
if (!result)
{
    console.log("Done");
    process.exit(1); // report workflow failed
}
else
{
    console.log("Done. No errors found");
    process.exit(0);
}

function processDir(dir)
{
    console.log();
    console.log(`Processing "${dir}" directory...`);

    return walkRecursive(dir);
}

function walkRecursive(dir)
{
    let result = true;

    const files = fs.readdirSync("./" + dir + "/", { withFileTypes: true });
    for (const file of files)
    {
        let filename = path.join(dir, file.name);
        filename = filename.split(path.sep).join('/');

        if (file.isDirectory())
            result &= walkRecursive(filename);
        else
            result &= processFile(filename);
    }

    return result;
}

function log(type, title, file, line, message)
{
    message = message.replace(/\t/, "[TAB]");

    let msg = "\n" + type.toUpperCase() + ": " + title + "\n";
    msg += "  File: \"" + file + "\", line: " + (line + 1) + "\n";
    msg += "  " + message.replace(/\r?\n/, "\n  ");
    console.log(msg);

    if (isGithubWorkflow)
    {
        let flatMsg = message.replace(/\r?\n/, ", ");
        console.log(`::${type} file=${file},line=${line+1},title=${title}::${flatMsg}`);
    }
}

function processFile(filename)
{
    let result = true;

    result &= processCodeFile(filename);

    return result;
}

function processCodeFile(filename)
{
    const filetype = path.extname(filename).toLowerCase();
    const isHeader = [".h", ".hpp"].includes(filetype);
    const isSource = [".c", ".cpp"].includes(filetype);

    if (!isHeader && !isSource)
        return true; // not a code file

    // skip third-party and specific files
    if (filename.includes("/bass/") ||
        filename.includes("/d3d/") ||
        filename.includes("/dxsdk/") ||
        filename.includes("/resource.h") ||
        filename.includes("/rw/") ||
        filename.includes("/rwd3d9/") ||
        filename.includes("/stdafx.h") ||
        filename.includes("/stdafx.cpp"))
        return true;

    let result = true;

    result &= verifyPluginSdkComment(filename, isHeader); // check comment header
    result = result && verifyDirectives(filename, isHeader); // includes and macros - lazy check
    result = result && verifyMemoryLayoutInfo(filename);

    return result;
}

function verifyPluginSdkComment(filename, isHeader)
{
    if(filename.startsWith("examples/"))
        return true; // header comment not required in example projects

    let expected = "/*\n";

    expected += "    Plugin-SDK (Grand Theft Auto";
    if (filename.toLowerCase().startsWith("shared/"))
        expected += ") SHARED";
    else
    {
        if (filename.toLowerCase().startsWith("plugin_ii/"))  expected += " 2";
        if (filename.toLowerCase().startsWith("plugin_iii/")) expected += " 3";
        if (filename.toLowerCase().startsWith("plugin_vc/"))  expected += " Vice City";
        if (filename.toLowerCase().startsWith("plugin_sa/"))  expected += " San Andreas";
        if (filename.toLowerCase().startsWith("plugin_iv/"))  expected += " IV";
        if (filename.toLowerCase().startsWith("plugin_iii_unreal/")) expected += " 3 Unreal";
        if (filename.toLowerCase().startsWith("plugin_vc_unreal/")) expected += " Vice City Unreal";
        if (filename.toLowerCase().startsWith("plugin_sa_unreal/")) expected += " San Andreas Unreal";
        expected += ")";
    }

    expected += " "

    if (isHeader)
        expected += "header";
    else
        expected += "source";
    expected += " file\n";

    expected += "    Authors: GTA Community. See more here\n";
    expected += "    https://github.com/DK22Pac/plugin-sdk\n";
    expected += "    Do not delete this comment block. Respect others' work!\n";
    expected += "*/";

    const buffer = Buffer.alloc(expected.length + 100);
    const fd = fs.openSync(filename, 'r');
    fs.readSync(fd, buffer, 0, expected.length + 100, 0);
    fs.closeSync(fd);
    let actual = buffer.toString('utf8');

    // compare lines
    const actualLines = actual.split(/\r?\n/);
    const expectedLines = expected.split('\n');
    for (let i = 0; i < expectedLines.length; i++)
    {
        if (actualLines[i] !== expectedLines[i])
        {
            log("error", "Invalid PSDK comment header", filename, i, `Desired: "${expectedLines[i]}"\nCurrent: "${actualLines[i]}"`);
            return false;
        }
    }

    return true;
}

function verifyDirectives(filename, isHeader)
{
    if (fs.statSync(filename).size > (6 * 1024 * 1024)) // skip files over 6 MB
    {
        log("warning", "Directives check skipped", filename, -1, `File "${filename}" has over 6 MB!`);
        return true; // too big to process
    }

    const content = fs.readFileSync(filename, 'utf-8');
    const lines = content.split(/\r?\n/);

    let firstLine = true;
    let insideCommentBlock = false;
    let afterCommentBlock = false;

    for (let i = 0; i < lines.length; i++)
    {
        const line = lines[i]

        if (firstLine && line.startsWith("/*"))
        {
            firstLine = false;
            insideCommentBlock = true;
            continue;
        }
        firstLine = false;

        if (insideCommentBlock)
        {
            if (line.includes("*/"))
                insideCommentBlock = false;

            continue;
        }

        // first non-comment line
        if (afterCommentBlock == false)
        {
            if (isHeader && line != "#pragma once")
            {
                log("error", "Invalid include guard", filename, i, `Desired: "#pragma once"\nCurrent: "${line}"`);
                return false; // missing include guard directive
            }

            afterCommentBlock = true;
            continue;
        }

        break;
    }

    return true;
}

function verifyMemoryLayoutInfo(filename)
{
    if (!filename.endsWith(".h") ||
        filename.startsWith("examples/") ||
        (filename.startsWith("shared") && !filename.startsWith("shared/game")) || // only shared/game from shared
        filename == "plugin_sa/game_sa/CShopping.h") // parsing of such nested types not implemented
        return true;

    if (fs.statSync(filename).size > (6 * 1024 * 1024)) // skip files over 6 MB
    {
        log("warning", "Memory layout check skipped", filename, -1, `File "${filename}" has over 6 MB!`);
        return true; // too big to process
    }

    let contents = fs.readFileSync(filename, 'utf-8');
    let usedLineFeed = contents.includes("\r\n") ? "\r\n" : "\n";
    let lines = contents.split(/\r?\n/);

    // find class/struct declarations
    let declaredTypes = []

    const classStartRegex = /^([^\S\r\n]*)(template\s*<[^>]+>\s+)?(?<!enum\s+)(class|struct)\s+(?:[A-Z0-9_]+\s+)*(\w+)(?:\s*:[^{]+)?\s*\{/gm;
    const lineRegex = /^\s*(?:(public|private|protected):|(?<![,(]\s*)(?!\s*(?:\/\/|return|if|else|for|while|virtual|typedef|using)\b)(?!(?:enum|struct|class)\s+\w+\s*;)(?!(?:struct|union|class)\s*\{)((?:(?:struct|union|class)\s+)?[\w:<>*&]+(?:\s+[\w:<>*&]+)*[\s*&]*)\s+(?!\s*\()([^;:{}(:]+?)\s*(?::\s*(\d+))?\s*;)/gm;

    let results = [];
    let handledTypes = [];
    let block;

    let match;
    while ((match = classStartRegex.exec(contents)) !== null)
    {
        const containerIndentation = match[1];
        const template = match[2];
        const type = match[3]; // "class" or "struct"
        const containerName = match[4];

        let braceCount = 1;
        let lastIdx = classStartRegex.lastIndex;
        let startPos = lastIdx;

        // find the matching closing brace
        while (lastIdx < contents.length && braceCount > 0)
        {
            if (contents[lastIdx] === '{') braceCount++;
            if (contents[lastIdx] === '}') braceCount--;
            lastIdx++;
        }

        if (template) // skip templated classes
        {
            classStartRegex.lastIndex = lastIdx;
            continue;
        }

        if (handledTypes.includes(containerName)) // skip duplicates/alternatives
        {
            classStartRegex.lastIndex = lastIdx;
            continue;
        }
        handledTypes.push(containerName);

        const body = contents.substring(startPos, lastIdx - 1);
        let members = GetMembers(body, (type === 'class') ? 'private' : 'public');

        const containerEndLine = contents.substring(0, lastIdx).split(/\r?\n/).length;

        for (let i = 0; i < members.length; i++)
        {
            const expected = containerIndentation + "VALIDATE_OFFSET(" + containerName + ", " + members[i].name + ", 0x";
            const lineIdx = containerEndLine + i;
            const line = lines[lineIdx] ? lines[lineIdx] : '';
            if (!line.startsWith(expected))
            {
                log("error", "Missing member offset validation", filename, lineIdx, `Desired: "${expected}...);"\nCurrent: "${line}"`);
                return false;
            }
        }

        const expected = containerIndentation + "VALIDATE_SIZE(" + containerName + ", 0x";
        const lineIdx = containerEndLine + members.length;
        const line = lines[lineIdx] ? lines[lineIdx] : '';
        if (!line.startsWith(expected))
        {
            log("error", "Missing type size validation", filename, lineIdx, `Desired: "${expected}...);"\nCurrent: "${line}"`);
            return false;
        }

        classStartRegex.lastIndex = lastIdx;
    }

    return true
}

function getRegexpMathGroupStartPos(match, groupIdx)
{
    let offset = match.index;
    for (let i = 1; i < groupIdx; i++)
    {
        if (match[i])
            offset = match[0].indexOf(match[i], offset - match.index) + match.index + match[i].length;
    }
    return match[0].indexOf(match[groupIdx], offset - match.index) + match.index;
}

function getContainerType(text, index)
{
    const textBefore = text.substring(0, index);
    const openBraces = (textBefore.match(/\{/g) || []).length;
    const closeBraces = (textBefore.match(/\}/g) || []).length;

    const defaultReturn = (type = 'global', name = null, isAnon = true, inst = null) =>
        ({ type, name, isAnonymous: isAnon, instanceName: inst, modifiers: "" });

    if (openBraces <= closeBraces) return defaultReturn();

    let braceLevel = 0;
    let openingBraceIndex = -1;
    for (let i = index - 1; i >= 0; i--)
    {
        if (text[i] === '}') braceLevel++;
        if (text[i] === '{')
        {
            if (braceLevel === 0)
            {
                openingBraceIndex = i;
                break;
            }
            braceLevel--;
        }
    }

    if (openingBraceIndex === -1) return defaultReturn();

    const textBeforeBrace = text.substring(0, openingBraceIndex);
    const varName = typeof getVarAfterBlock === 'function' ? getVarAfterBlock(text, index) : null;

    const lastDelimiter = Math.max(
        textBeforeBrace.lastIndexOf('{'),
        textBeforeBrace.lastIndexOf('}'),
        textBeforeBrace.lastIndexOf(';')
    );

    const context = textBeforeBrace.substring(lastDelimiter + 1).trim();

    // Helper: Returns a space-separated string of recognized keywords
    const extractModifiers = (prefix) => {
        if (!prefix) return "";
        const known = ['static', 'public', 'private', 'protected', 'virtual', 'inline', 'explicit', 'friend', 'extern', 'internal', 'volatile', 'async', 'sealed', 'abstract', 'partial', 'readonly'];
        return prefix.trim().split(/\s+/)
            .filter(word => known.includes(word.toLowerCase()))
            .join(' ');
    };

    // 1. Function Match (Captures leading text in Group 1)
    const funcRegex = /(?:([\w\s]+)\s+)?(?:operator\s*[+\-*/%^&|!<>~=,\[\]()]+|[a-zA-Z_]\w*(?:::[a-zA-Z_]\w*)?)\s*\([^)]*\)(?:\s*(?:const|override|final|noexcept|explicit|volatile|[\w_]+))*\s*$/i;
    const funcMatch = context.match(funcRegex);
    if (funcMatch)
    {
        const sig = funcMatch[0].trim();
        const head = sig.split('(')[0].trim();
        const nameMatch = head.match(/(?:operator\s*.+|[\w_]+)$/);
        return {
            type: 'function',
            name: nameMatch ? nameMatch[0].trim() : null,
            isAnonymous: false,
            instanceName: varName,
            modifiers: extractModifiers(funcMatch[1])
        };
    }

    // 2. Container Match (Captures leading text in Group 1)
    const contRegex = /(?:([\w\s]+)\s+)?(union|struct|class|enum)\b\s*([a-zA-Z_]\w*)?\s*(?::\s*[^;{]+)?$/i;
    const contMatch = context.match(contRegex);

    if (contMatch)
    {
        return {
            type: contMatch[2].toLowerCase(),
            name: contMatch[3] || null,
            isAnonymous: !contMatch[3],
            instanceName: varName,
            modifiers: extractModifiers(contMatch[1])
        };
    }

    return { ...defaultReturn('brackets', null, true, varName) };
}

function GetMembers(input, currentAccess)
{
    const strippedInput = input.replace(/\/\*[\s\S]*?\*\//g, (match) => match.replace(/[^\r\n]/g, ' '));
    const lineEndings = input.includes('\r\n') ? '\r\n' : '\n';
    const lines = strippedInput.split(lineEndings);
    const results = [];
    const accessRegex = /^\s*(public|private|protected)\s*:/;
    const lineRegex = /^\s*(?!(?:return|if|else|for|while|virtual|typedef|using|union|struct|class|void|operator)\b)(?!(?:enum|struct|class)\s+\w+\s*;)([^;]+);/;

    let inputPos = 0;
    let globalParenDepth = 0;

    for (let line of lines)
    {
        const trimmed = line.trim();
        const codePart = line.split('//')[0];

        let parenDepthBeforeLine = globalParenDepth;
        for (let char of codePart)
        {
            if (char === '(') globalParenDepth++;
            else if (char === ')') globalParenDepth--;
        }

        const hasParens = codePart.includes('(') && codePart.includes(')');
        const hasAssignment = codePart.includes('=');
        const isOperator = trimmed.includes('operator');

        const isFunction = (parenDepthBeforeLine > 0 && !trimmed.includes('[')) ||
                           (hasParens && !hasAssignment && !trimmed.includes('[')) ||
                           isOperator;

        if (isFunction || !trimmed || trimmed.startsWith('//') || trimmed === '};')
        {
            if (!hasAssignment || parenDepthBeforeLine > 0 || isOperator)
            {
                inputPos += line.length + lineEndings.length;
                continue;
            }
        }

        const accessMatch = line.match(accessRegex);
        if (accessMatch)
        {
            currentAccess = accessMatch[1];
            inputPos += line.length + lineEndings.length;
            continue;
        }

        if (line.trim().startsWith('typedef') || line.trim().startsWith('using'))
        {
            inputPos += line.length + lineEndings.length;
            continue;
        }

        const match = line.match(lineRegex);
        if (match)
        {
            let content = match[1].trim();
            let bitWidth = null;

            const bitMatch = content.match(/\s*:\s*(\d+)$/);
            if (bitMatch)
            {
                bitWidth = bitMatch[1];
                content = content.substring(0, bitMatch.index).trim();
            }

            let assignIdx = -1, aDepth = 0, tDepth = 0, bDepth = 0;
            for (let i = 0; i < content.length; i++)
            {
                const c = content[i];
                if (c === '{') bDepth++; else if (c === '}') bDepth--;
                else if (c === '<') tDepth++; else if (c === '>') tDepth--;
                else if (c === '(') aDepth++; else if (c === ')') aDepth--;
                else if (c === '=' && bDepth === 0 && tDepth === 0 && aDepth === 0) { assignIdx = i; break; }
            }
            if (assignIdx !== -1) content = content.substring(0, assignIdx).trim();

            const parts = [];
            let currentPart = "", dParens = 0, dBrackets = 0, dAngles = 0;

            for (let i = 0; i < content.length; i++)
            {
                const char = content[i];
                if (char === '(') dParens++; else if (char === ')') dParens--;
                else if (char === '[') dBrackets++; else if (char === ']') dBrackets--;
                else if (char === '<') dAngles++; else if (char === '>') dAngles--;

                if (/\s/.test(char) && (dParens + dBrackets + dAngles) === 0)
                {
                    if (currentPart)
                    {
                        parts.push(currentPart);
                        currentPart = "";
                    }
                }
                else
                    currentPart += char;
            }
            if (currentPart) parts.push(currentPart);

            if (parts.length >= 2)
            {
                let splitIdx = parts.length - 1;
                for (let i = 0; i < parts.length; i++)
                {
                    if (parts[i].includes(',')) { splitIdx = i; break; }
                }

                let typePart = parts.slice(0, splitIdx).join(" ").trim();
                let namePart = parts.slice(splitIdx).join(" ").trim();

                const symbolMatch = namePart.match(/^[*& \t]+/);
                if (symbolMatch)
                {
                    typePart += (typePart ? " " : "") + symbolMatch[0].trim();
                    namePart = namePart.substring(symbolMatch[0].length).trim();
                }

                typePart = typePart.replace(/^[A-Z0-9_]{3,}\s+/, '').trim();

                const blockInfo = getContainerType(strippedInput, inputPos + line.indexOf(match[1]));

                if (blockInfo.instanceName)
                {
                    if (!blockInfo.modifiers.includes("static") && (!results.length || results[results.length - 1].nameRaw != blockInfo.instanceName))
                    {
                        let cleanName = blockInfo.instanceName.split('[')[0].trim();
                        cleanName = cleanName.replace(/[*&]/g, '');

                        results.push({
                            access: currentAccess,
                            type: typePart,
                            name: cleanName,
                            nameRaw: blockInfo.instanceName,
                            bitWidth: bitWidth
                        });
                    }

                    inputPos += line.length + lineEndings.length;
                    continue;
                }

                if (blockInfo.type == "function" || blockInfo.type == "brackets" || !blockInfo.isAnonymous)
                {
                    inputPos += line.length + lineEndings.length;
                    continue;
                }

                let names = namePart.split(',').map(n => n.trim());
                if (currentAccess === "public" && !typePart.includes("static") && !bitWidth)
                {
                    for (let n of names)
                    {
                        let cleanName = n.split('[')[0].trim();
                        if (/\s/.test(cleanName) || cleanName.includes('(')) continue;
                        cleanName = cleanName.replace(/[*&]/g, '');

                        if (["{}", "const"].includes(cleanName))
                            continue; // random invalid junk

                        if (results.length && results[results.length - 1].name == cleanName)
                            continue; // skip duplicate

                        results.push({
                            access: currentAccess,
                            type: typePart,
                            name: cleanName,
                            nameRaw: n,
                            bitWidth: bitWidth
                        });
                    }
                }
            }
        }
        inputPos += line.length + lineEndings.length;
    }
    return results;
}

function getVarAfterBlock(code, pos)
{
    // backwards to find the actual start of the block we are in
    let startPos = pos;
    let findDepth = 0;
    while (startPos >= 0)
    {
        if (code[startPos] === '}') findDepth++;
        if (code[startPos] === '{')
        {
            if (findDepth === 0) break;
            findDepth--;
        }
        startPos--;
    }

    if (startPos < 0) return null; // not inside block

    let depth = 0;
    for (let i = startPos; i < code.length; i++)
    {
        if (code[i] === '{')
        {
            depth++;
        }
        else if (code[i] === '}')
        {
            depth--;
            if (depth === 0)
            {
                const afterBlock = code.substring(i + 1);
                const match = afterBlock.match(/^\s*([^;{ \t\n\r]+)\s*;/); // skip whitespace/newlines, capture word, expect semicolon

                if (match)
                {
                    return match[1].trim();
                }
                return null; // Block ended but no variable name followed
            }
        }
    }

    return null;
}

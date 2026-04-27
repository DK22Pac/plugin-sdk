console.log("Starting file contents validation...");

const fs = require("fs");
const path = require("path");

const isGithubWorkflow = process.argv.includes("github");


let result = true;
result &= walkRecursive("./examples/");
result &= walkRecursive("./plugin_II/");
result &= walkRecursive("./plugin_III/");
result &= walkRecursive("./plugin_vc/");
result &= walkRecursive("./plugin_sa/");
result &= walkRecursive("./plugin_IV/");
result &= walkRecursive("./plugin_iii_unreal/");
result &= walkRecursive("./plugin_vc_unreal/");
result &= walkRecursive("./plugin_sa_unreal/");
result &= walkRecursive("./shared/");

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

function walkRecursive(dir)
{
    let result = true;

    const files = fs.readdirSync(dir, { withFileTypes: true });
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

    return result;
}

function verifyPluginSdkComment(filename, isHeader)
{
    if(filename.startsWith("examples/"))
        return true; // header comment not required in example projects

    let expected = "/*\n";

    expected += "    Plugin-SDK (Grand Theft Auto";
    if (filename.toLowerCase().startsWith("plugin_ii/"))  expected += " 2)";
    if (filename.toLowerCase().startsWith("plugin_iii/")) expected += " 3)";
    if (filename.toLowerCase().startsWith("plugin_vc/"))  expected += " Vice City)";
    if (filename.toLowerCase().startsWith("plugin_sa/"))  expected += " San Andreas)";
    if (filename.toLowerCase().startsWith("plugin_iv/"))  expected += " IV)";
    if (filename.toLowerCase().startsWith("plugin_iii_unreal/")) expected += " 3 Unreal)";
    if (filename.toLowerCase().startsWith("plugin_vc_unreal/")) expected += " Vice City Unreal)";
    if (filename.toLowerCase().startsWith("plugin_sa_unreal/")) expected += " San Andreas Unreal)";
    if (filename.toLowerCase().startsWith("shared/")) expected += ") SHARED";
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

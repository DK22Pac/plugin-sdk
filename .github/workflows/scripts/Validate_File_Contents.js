const fs = require("fs");
const path = require("path");

let result = true;
//result = result && walkRecursive("./examples/");
result = result && walkRecursive("./plugin_sa/");

if (!result)
    process.exit(1); // problem found


function walkRecursive(dir)
{
    let result = true;
    
    const files = fs.readdirSync(dir, { withFileTypes: true });
    for (const file of files)
    {
        const filename = path.join(dir, file.name);
        
        if (file.isDirectory())
            walkRecursive(filename);
        else
            result = result && processFile(filename);
    }
    
    return result;
}

function processFile(filename)
{
	let result = true;

    result = result && processCodeFile(filename);
    
    return result;
}

function processCodeFile(filename)
{
	const headerExtensions = [".h", ".hpp"];
	const sourceExtensions = [".c", ".cpp"];
    const filetype = path.extname(filename).toLowerCase();
    
    if (!headerExtensions.includes(filetype) && !sourceExtensions.includes(filetype))
		return true; // not code file
	
    let result = true;
	
	result = result && verifyPluginSdkComment(filename, headerExtensions.includes(filetype));
    
    console.log(filename);
    
    return result;
}

function verifyPluginSdkComment(filename, isHeader)
{
	let expected = "/*\n";
	
	expected += "    Plugin-SDK (Grand Theft Auto ";
	if (filename.toLowerCase().startsWith("plugin_II"))  expected += "2";
	if (filename.toLowerCase().startsWith("plugin_III")) expected += "3";
	if (filename.toLowerCase().startsWith("plugin_vc"))  expected += "Vice City";
	if (filename.toLowerCase().startsWith("plugin_sa"))  expected += "San Andreas";
	if (filename.toLowerCase().startsWith("plugin_IV"))  expected += "IV";
	if (filename.toLowerCase().startsWith("plugin_vc_unreal")) expected += "Vice City Unreal";
	if (filename.toLowerCase().startsWith("plugin_sa_unreal")) expected += "San Andreas Unreal";
	if (filename.toLowerCase().startsWith("shared")) expected += "shared";
	expected += ") "
	
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
	actual = actual.replace(/\r\n/g, "\n");
	
	// compare lines
    const actualLines = actual.split('\n');
	const expectedLines = expected.split('\n');
    for (let i = 0; i < expectedLines.length; i++)
	{
        if (actualLines[i] !== expectedLines[i])
		{
			console.log(actualLines)
			
            console.log(`::error file=${filename},line=${i+1},title=Invalid PSDK comment header::Found:\`${actualLines[i]}\`, expected \`${expectedLines[i]}\``);
			return false;
        }
    }

    return true;
}

/*const fs = require("fs");
const title = process.argv[2];

function escapeData(value) {
  return value.replace(/%/g, "%25").replace(/\r/g, "%0D").replace(/\n/g, "%0A");
}

function escapeProperty(value) {
  return escapeData(value).replace(/:/g, "%3A").replace(/,/g, "%2C");
}

function normalizeLevel(value) {
  return ["error", "warning", "notice"].includes(value) ? value : "error";
}

// Step 1: Read, sort, and deduplicate lines
let lines = fs.readFileSync("output.log", "utf8").split(/\r?\n/);
lines.sort();
lines = new Set(lines);

// Step 2 & 3: Replace patterns and process each line for GitHub Actions output (from memory)
let hadOutput = false;
for (let line of lines) {
  line = line.replace(/     \d>/g, "").replace(/.:\\a\\plugin-sdk\\plugin-sdk\\/g, "");
  if (!line.trim()) continue;
  hadOutput = true;
  const match = line.match(/^(.*)\((\d+),(\d+)\): (\w+) (.*) \[.*\]$/);
  if (match) {
    // ::level file=filename,line=linenumber,title=title::message
    const level = normalizeLevel(match[4]);
    console.log(`::${level} file=${escapeProperty(match[1])},line=${match[2]},title=${escapeProperty(title)}::${escapeData(match[5])}`);
  } else {
    console.log(`::error title=${escapeProperty(title)}::${escapeData(line)}`);
  }
}

// Step 4: Exit with error if there was anything in log (error or warning)
if (hadOutput) */

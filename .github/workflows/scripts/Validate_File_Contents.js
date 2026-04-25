const fs = require('fs');
const path = require('path');

walkRecursive('./');

function walkRecursive(dir)
{
    const files = fs.readdirSync(dir, { withFileTypes: true });

    for (const file of files)
    {
        const fullPath = path.join(dir, file.name);
        
        if (file.isDirectory())
            walkRecursive(fullPath);
        else
            console.log('File found:', fullPath);
    }
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
    // ::level file=filepath,line=linenumber,title=title::message
    const level = normalizeLevel(match[4]);
    console.log(`::${level} file=${escapeProperty(match[1])},line=${match[2]},title=${escapeProperty(title)}::${escapeData(match[5])}`);
  } else {
    console.log(`::error title=${escapeProperty(title)}::${escapeData(line)}`);
  }
}

// Step 4: Exit with error if there was anything in log (error or warning)
if (hadOutput) process.exit(1);*/

console.log("hello!");
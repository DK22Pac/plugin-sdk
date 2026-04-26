const fs = require("fs");
const path = require("path");

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
    process.exit(1); // report workflow failed


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

function processFile(filename)
{
    let result = true;

    result &= processCodeFile(filename);
    
    return result;
}

function processCodeFile(filename)
{
	// skip files
	if (filename.includes("/bass/") ||
		filename.includes("/d3d/") ||
		filename.includes("/dxsdk/") ||
		filename.includes("/resource.h") ||
		filename.includes("/rw/") ||
		filename.includes("/rwd3d9/") ||
		filename.includes("/stdafx.h") ||
		filename.includes("/stdafx.cpp"))
        return true;
		
    const headerExtensions = [".h", ".hpp"];
    const sourceExtensions = [".c", ".cpp"];
    const filetype = path.extname(filename).toLowerCase();
    
    if (!headerExtensions.includes(filetype) && !sourceExtensions.includes(filetype))
        return true; // not code file
    
    let result = true;
    
    if (!filename.startsWith("examples/")) result &= verifyPluginSdkComment(filename, headerExtensions.includes(filetype)); // check comment header
    
    return result;
}

function verifyPluginSdkComment(filename, isHeader)
{
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
    actual = actual.replace(/\r\n/g, "\n");
    
    // compare lines
    const actualLines = actual.split('\n');
    const expectedLines = expected.split('\n');
    for (let i = 0; i < expectedLines.length; i++)
    {
        if (actualLines[i] !== expectedLines[i])
        {            
            console.log(`::error file=${filename},line=${i+1},title=Invalid PSDK comment header::Expected "${expectedLines[i]}", found "${actualLines[i]}"`);
            return false;
        }
    }

    return true;
}

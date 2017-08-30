#include <Windows.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <sstream>

using namespace std;
using namespace experimental::filesystem;

#define _PLUGIN_SDK_BUILD_VER_ "1.0.0"

// pluginsdk-build build projectdir:"$(ProjectDir)" projectname:"$(ProjectName)" targetname:"$(ProjectName).asi" buildtype:DLL includeDirs:"path" definitions:"def" additional:"additional","commands"
int main(int argc, char *argv[]) {
    cout << ">>> Plugin-SDK Build Tool v." << _PLUGIN_SDK_BUILD_VER_ << " <<<" << endl;

    if (argc < 2) {
        cout << "Error: not enought parameters" << endl;
        return 0;
    }

    enum BuildCommand {
        COMMAND_BUILD,
        COMMAND_REBUILD,
        COMMAND_CLEAN
    } buildCommand;

    string buildCommandTypeStr = argv[1];

    if (buildCommandTypeStr == "build")
        buildCommand = COMMAND_BUILD;
    else if (buildCommandTypeStr == "rebuild")
        buildCommand = COMMAND_REBUILD;
    else if (buildCommandTypeStr == "clean")
        buildCommand = COMMAND_CLEAN;
    else {
        cout << "Error: unknown build command" << endl;
        return 0;
    }

    struct BuildParameters {
        bool fulllog = false;
        string buildtype;
        string projectdir;
        string projectname;
        string targetname;
        string outdir;
        string intdir;
        vector<string> definitions;
        vector<string> includeDirs;
        vector<string> libraryDirs;
        vector<string> libraries;
        string additional;
        string linkadditional;
    } parameters;

    auto readOneParameter = [](string const &arg) {
        if (arg.length() < 2 || arg.front() != '(' || arg.back() != ')')
            cout << "Warning: incorrect parameter " << arg << endl;
        string line = arg.substr(1, arg.length() - 2);
        size_t comma = line.find_first_of(';');
        if (comma != string::npos)
            return line.substr(0, comma);
        return line;
    };

    auto readParameters = [](vector<string> &vec, string const &arg) {
        if (arg.length() < 2 || arg.front() != '(' || arg.back() != ')')
            cout << "Warning: incorrect parameter " << arg << endl;
        string line = arg.substr(1, arg.length() - 2);
        size_t currPos = 0;
        size_t comma = line.find_first_of(';');
        while (comma != string::npos) {
            vec.push_back(line.substr(currPos, comma));
            currPos = comma + 1;
            comma = line.find_first_of(';', currPos);
        }
        vec.push_back(line.substr(currPos));
    };

    auto isCleanMode = [=]() {
        return buildCommand == COMMAND_CLEAN;
    };

    auto isBuildMode = [=]() {
        return buildCommand == COMMAND_BUILD;
    };

    auto isRebuildMode = [=]() {
        return buildCommand == COMMAND_REBUILD;
    };

    auto isBuildOrRebuildMode = [=]() {
        return buildCommand == COMMAND_BUILD || buildCommand == COMMAND_REBUILD;
    };

    auto executeCommand = [](string const &file, string const &command) {
        STARTUPINFO startInf;
        memset(&startInf, 0, sizeof(STARTUPINFO));
        startInf.cb = sizeof(STARTUPINFO);
        PROCESS_INFORMATION procInf;
        memset(&procInf, 0, sizeof(PROCESS_INFORMATION));
        string cmdline = file + " " + command;
        BOOL b = CreateProcess(NULL, const_cast<char *>(cmdline.c_str()), NULL, NULL, FALSE,
            0, NULL, NULL, &startInf, &procInf);
        int commandResult = 0;
        if (b) {
            WaitForSingleObject(procInf.hProcess, INFINITE);
            GetExitCodeProcess(procInf.hProcess, reinterpret_cast<DWORD *>(&commandResult));
            CloseHandle(procInf.hProcess);
            CloseHandle(procInf.hThread);
        }
        else
            commandResult = GetLastError();
        return commandResult;
    };

    for (int i = 2; i < argc; i++) {
        //MessageBox(0, argv[i], 0, 0);

        // read parameters and fill BuildParameters structure

        string strarg = argv[i];
        if (!strarg.compare(0, 10, "buildtype:"))
            parameters.buildtype = readOneParameter(strarg.substr(10));
        else if (!strarg.compare(0, 11, "projectdir:"))
            parameters.projectdir = readOneParameter(strarg.substr(11));
        else if (!strarg.compare(0, 12, "projectname:"))
            parameters.projectname = readOneParameter(strarg.substr(12));
        else if (!strarg.compare(0, 11, "targetname:"))
            parameters.targetname = readOneParameter(strarg.substr(11));
        else if (!strarg.compare(0, 7, "outdir:"))
            parameters.outdir = readOneParameter(strarg.substr(7));
        else if (!strarg.compare(0, 7, "intdir:"))
            parameters.intdir = readOneParameter(strarg.substr(7));
        else if (!strarg.compare(0, 12, "definitions:"))
            readParameters(parameters.definitions, strarg.substr(12));
        else if (!strarg.compare(0, 12, "includeDirs:"))
            readParameters(parameters.includeDirs, strarg.substr(12));
        else if (!strarg.compare(0, 12, "libraryDirs:"))
            readParameters(parameters.libraryDirs, strarg.substr(12));
        else if (!strarg.compare(0, 10, "libraries:"))
            readParameters(parameters.libraries, strarg.substr(10));
        else if (!strarg.compare(0, 11, "additional:"))
            parameters.additional = readOneParameter(strarg.substr(11));
        else if (!strarg.compare(0, 15, "linkadditional:"))
            parameters.linkadditional = readOneParameter(strarg.substr(15));
        else if (!strarg.compare(0, 7, "fulllog"))
            parameters.fulllog = true;
    }

    // check if all required parameters are set

    if (isBuildOrRebuildMode() && parameters.buildtype.empty()) {
        cout << "Error: buildtype is not set" << endl;
        return 0;
    }

    if (isBuildOrRebuildMode() && parameters.buildtype.compare("DLL") && parameters.buildtype.compare("LIB")) {
        cout << "Error: unknown buildtype" << endl;
        return 0;
    }

    if (parameters.projectdir.empty()) {
        cout << "Error: projectdir is not set" << endl;
        return 0;
    }

    if (parameters.projectname.empty()) {
        cout << "Error: projectname is not set" << endl;
        return 0;
    }

    if (parameters.targetname.empty()) {
        cout << "Error: targetname is not set" << endl;
        return 0;
    }

    if (parameters.outdir.empty() || (parameters.outdir.length() == 1 && (parameters.outdir[0] == '\\' || parameters.outdir[0] == '/'))) {
        parameters.outdir = parameters.projectdir;
    }

    if (parameters.intdir.empty()) {
        cout << "Error: intdir is not set" << endl;
        return 0;
    }

    // everything ok, now parse .vcxproj file

    vector<string> cppFiles;

    ifstream file(parameters.projectdir + parameters.projectname + ".vcxproj");
    if (file.is_open()) {
        for (string line; getline(file, line); ) {
            size_t lineBegin = line.find_first_not_of(" \t");
            if (lineBegin != string::npos) {
                if (!line.compare(lineBegin, 20, "<ClCompile Include=\"")) {
                    size_t pathEnd = line.find_first_of('"', lineBegin + 20);
                    if (pathEnd != string::npos) {
                        string cppFileProjPath = line.substr(lineBegin + 20, pathEnd - 20 - lineBegin);
                        size_t lastSlash = cppFileProjPath.find_last_of("\\/");
                        cppFiles.push_back(cppFileProjPath);
                    }
                }
            }
        }
    }
    else {
        cout << "Error: can't open project file" << " " << parameters.projectdir << endl;
        return 0;
    }

    // check for clean

    if (isCleanMode()) {

        // clean and return

        // delete object files

        for (auto const &cppFile : cppFiles) {
            path cppFilePath = canonical(cppFile, parameters.projectdir);
            path objFilePath = path(canonical(parameters.intdir) / cppFilePath.filename()).replace_extension("o");
            if (exists(objFilePath)) {
                remove(objFilePath);
                if (parameters.fulllog)
                    cout << "Deleting: " << objFilePath << endl;
            }
        }

        // delete output file

        path outputPath = canonical(parameters.outdir) / parameters.targetname;
        if (exists(outputPath)) {
            remove(outputPath);
            if (parameters.fulllog)
                cout << "Deleting: " << outputPath << endl;
        }

        return 0;
    }

    if (cppFiles.size() == 0) {
        cout << "Warning: no files for compilation" << endl;
        return 0;
    }

    // start compilation - generate object files

    // re-create object directory

    path objectsPath = path(parameters.intdir) / parameters.projectname;
    if (exists(objectsPath)) {
        std::vector<path> oldObjectFiles;
        for (const auto& p : directory_iterator(objectsPath)) {
            if (p.path().extension() == ".o")
                oldObjectFiles.push_back(p.path());
        }
        for (const auto& p : oldObjectFiles)
            remove(p);
    }
    else {
        create_directories(objectsPath);

        // validate object directory
        if (!exists(objectsPath)) {
            cout << "Error: can't open intdir directory" << endl;
            return 0;
        }
    }

    cout << "Compiling..." << endl;

    for (auto const &cppFile : cppFiles) {
        stringstream command;
        // relative path -> canonical path
        path cppFilePath = canonical(cppFile, parameters.projectdir);
        // create object path
        path objFilePath = path(canonical(parameters.intdir) / parameters.projectname / cppFilePath.filename()).replace_extension("o");

        if (parameters.fulllog) {
            cout << "Compiling: relative:  " << cppFile << endl;
            cout << "Compiling: canonical: " << cppFilePath << endl;
            cout << "Compiling: object:    " << objFilePath << endl;
        }

        // compile
        command << "-c " << '"' << cppFilePath << '"' << " ";
        // output
        command << "-o " << '"' << objFilePath << '"' << " ";
        // include dirs
        for (auto const &includeDir : parameters.includeDirs)
            command << "-I" << '"' << canonical(includeDir) << '"' << " ";
        // additional commands
        if (!parameters.additional.empty())
            command << parameters.additional;

        if (parameters.fulllog)
            cout << "Compiling: " << cppFilePath.filename() << " : " << command.str() << endl;
        else
            cout << cppFilePath.filename() << endl;

        if (executeCommand("g++", command.str().c_str()) != 0)
            cout << "Error: can't compile " << cppFilePath.filename() << " (" << cppFilePath << ")" << endl;
    }

    // generate library

    // create output directories, if they are not exist
    if (!exists(parameters.outdir)) {
        create_directories(parameters.outdir);
        // validate output directory
        if (!exists(parameters.outdir)) {
            cout << "Error: can't open outdir directory" << endl;
            return 0;
        }
    }

    cout << "Linking..." << endl;

    {
        stringstream command;
        if (!parameters.buildtype.compare("LIB"))
            command << "rcs ";
        else
            command << "-shared -o ";
        path outputPath = canonical(parameters.outdir) / parameters.targetname;
        command << '"' << outputPath << '"' << " ";
        path objectsPath = canonical(parameters.intdir) / parameters.projectname / "*.o";
        command << '"' << objectsPath << '"' << " ";
        // library dirs
        for (auto const &libraryDir : parameters.libraryDirs)
            command << "-L" << '"' << canonical(libraryDir) << '"' << " ";
        // libraries dirs
        for (auto const &library : parameters.libraries)
            command << "-l" << '"' << library << '"' << " ";
        if (!parameters.linkadditional.empty())
            command << parameters.linkadditional;

        if (parameters.fulllog)
            cout << "Linking: " << command.str() << endl;

        if (executeCommand(!parameters.buildtype.compare("LIB") ? "ar" : "g++", command.str().c_str()) != 0)
            cout << "Error: failed to link objects (command: " << command.str() << ")" << endl;
        else
            cout << parameters.projectname << ".vcxproj -> " << outputPath << endl;
    }

    return 0;
}
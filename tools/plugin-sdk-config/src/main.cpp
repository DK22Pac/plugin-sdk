#include <string>
#include <iostream>
#include <vector>

#include <Windows.h>
#include <assert.h>
#include <sddl.h>
#include <ShlObj.h>

/*
    The Goal of this program is to set environment variables on the Windows platform for plugin-sdk compilation.
    It tries to automatically detect the required paths.
    We should expand this to show the environment variables in a GUI.
*/

static bool doesFileExist( const std::wstring& path )
{
    DWORD attrib = GetFileAttributesW( path.c_str() );

    if ( attrib == INVALID_FILE_ATTRIBUTES )
        return false;

    return ( ( attrib & FILE_ATTRIBUTE_DIRECTORY ) == 0 );
}

static bool doesDirectoryExist( const std::wstring& path )
{
    DWORD attrib = GetFileAttributesW( path.c_str() );

    if ( attrib == INVALID_FILE_ATTRIBUTES )
        return false;

    return ( ( attrib & FILE_ATTRIBUTE_DIRECTORY ) != 0 );
}

static bool isCorrectFolderConfiguration(
    const wchar_t *dirLoc,
    const wchar_t *requiredFiles[], size_t numRequiredFiles,
    const wchar_t *requiredFolders[], size_t numRequiredFolders
)
{
    if ( !doesDirectoryExist( dirLoc ) )
        return false;

    // Check existance of basic components.
    std::wstring baseDir( dirLoc );
    baseDir += L"\\";

    // Do all files exist that matter?
    for ( size_t n = 0; n < numRequiredFiles; n++ )
    {
        const wchar_t *theFileName = requiredFiles[n];

        if ( doesFileExist( baseDir + theFileName ) == false )
        {
            return false;
        }
    }

    // Do all the good folders exist?
    for ( size_t n = 0; n < numRequiredFolders; n++ )
    {
        const wchar_t *theFolderName = requiredFolders[n];

        if ( doesDirectoryExist( baseDir + theFolderName ) == false )
        {
            return false;
        }
    }

    // We met all requirements.
    return true;
}

static bool isPluginSDKDirectory( const wchar_t *dirLoc )
{
    static const wchar_t* requiredFiles[] =
    {
        L"premake5.exe", L"premake5.lua", L"LICENSE", L"Readme.md"
    };

    static const wchar_t* requiredFolders[] =
    {
        L"examples", L"injector", L"plugin_III", L"plugin_vc", L"plugin_sa", L"shared", L"tools"
    };

    return isCorrectFolderConfiguration( dirLoc, requiredFiles, _countof(requiredFiles), requiredFolders, _countof(requiredFolders) );
}

static bool isDirectX9Directory( const wchar_t *dirLoc )
{
    static const wchar_t* requiredFiles[] =
    {
        L"Include\\d3d9.h",
        L"Include\\d3dx9.h",
        L"Lib\\x86\\d3d9.lib",
        L"Lib\\x86\\d3dx9.lib"
    };

    static const wchar_t* requiredFolders[] =
    {
        L"Include",
        L"Lib",
        L"Lib\\x86"
    };

    return isCorrectFolderConfiguration( dirLoc, requiredFiles, _countof(requiredFiles), requiredFolders, _countof(requiredFolders) );
}

static bool isRWD3D9Directory( const wchar_t *dirLoc )
{
    // TODO.
    return isCorrectFolderConfiguration( dirLoc, NULL, 0, NULL, 0 );
}

static bool is_cleo_sdk_directory( const wchar_t *dirLoc )
{
    static const wchar_t* requiredFiles[] =
    {
        L"cleo.h",
        L"cleo.lib"
    };

    return isCorrectFolderConfiguration( dirLoc, requiredFiles, _countof(requiredFiles), NULL, 0 );
}

static bool isGTA3Directory( const wchar_t *dirLoc )
{
    static const wchar_t* requiredFiles[] =
    {
        L"gta3.exe",
        L"anim\\cuts.dir",
        L"anim\\cuts.img",
        L"anim\\ped.ifp",
        L"data\\object.dat",
        L"data\\main.scm",
        L"models\\gta3.dir",
        L"models\\gta3.img",
        L"models\\generic.txd",
        L"models\\Generic\\peds.dff",
        L"models\\Coll\\peds.col",
        L"txd\\mainsc1.txd",
        L"txd\\mainsc2.txd"
    };

    static const wchar_t* requiredFolders[] =
    {
        L"anim",
        L"data",
        L"models",
        L"mss",
        L"txd"
    };

    return isCorrectFolderConfiguration( dirLoc, requiredFiles, _countof(requiredFiles), requiredFolders, _countof(requiredFolders) );
}

static bool isGTAVCDirectory( const wchar_t *dirLoc )
{
    static const wchar_t* requiredFiles[] =
    {
        L"gta-vc.exe",
        L"anim\\cuts.dir",
        L"anim\\cuts.img",
        L"anim\\ped.ifp",
        L"data\\gta_vc.dat",
        L"data\\main.scm",
        L"models\\gta3.img",
        L"models\\gta3.dir",
        L"models\\generic.txd",
        L"models\\coll\\generic.col",
        L"txd\\outro.txd"
    };

    static const wchar_t* requiredFolders[] =
    {
        L"anim",
        L"data",
        L"models",
        L"mss",
        L"TEXT",
        L"txd"
    };

    return isCorrectFolderConfiguration( dirLoc, requiredFiles, _countof(requiredFiles), requiredFolders, _countof(requiredFolders) );
}

static bool isGTASADirectory( const wchar_t *dirLoc )
{
    // First go over some of the the absolutely required things.
    static const wchar_t* requiredFiles[] =
    {
        L"stream.ini",
        L"anim\\anim.img",
        L"anim\\cuts.img",
        L"anim\\ped.ifp",
        L"data\\object.dat",
        L"data\\surface.dat",
        L"models\\cutscene.img",
        L"models\\gta3.img",
        L"models\\gta_int.img",
        L"models\\player.img",
        L"models\\particle.txd",
        L"models\\generic\\vehicle.txd",
        L"models\\grass\\plant1.txd",
        L"models\\txd\\LOADSCS.txd"
    };

    static const wchar_t* requiredFolders[] =
    {
        L"anim",
        L"data",
        L"models",
        L"models\\coll",
        L"models\\generic",
        L"models\\grass",
        L"models\\txd",
        L"text"
    };

    if ( !isCorrectFolderConfiguration( dirLoc, requiredFiles, _countof(requiredFiles), requiredFolders, _countof(requiredFolders) ) )
        return false;

    // Check for the existance of the GTA SA executable.
    std::wstring baseDir( dirLoc );
    baseDir += L"\\";

    if ( !doesFileExist( baseDir + L"GTA_SA.EXE" ) && !doesFileExist( baseDir + L"gta-sa.exe" ) )
    {
        return false;
    }

    // We are a GTA SA folder.
    return true;
}

// Returns the SID of the current user.
static std::wstring GetCurrentUserSID( void )
{
    TOKEN_USER *token_user;
    {
        HANDLE processToken;

        BOOL gotProcessToken = OpenProcessToken( GetCurrentProcess(), TOKEN_READ, &processToken );

        assert( gotProcessToken == TRUE );

        DWORD token_user_length_out;
        GetTokenInformation( processToken, TokenUser, NULL, 0, &token_user_length_out );

        token_user = (TOKEN_USER*)new char[ token_user_length_out ];

        BOOL gotUserInfo = GetTokenInformation( processToken, TokenUser, token_user, token_user_length_out, &token_user_length_out );

        assert( gotUserInfo == TRUE );

        CloseHandle( processToken );
    }

    wchar_t *string_sid;

    BOOL gotSid = ConvertSidToStringSidW( token_user->User.Sid, &string_sid );

    assert( gotSid == TRUE );

    delete [] token_user;

    // Get the SID into our managed string structure.
    std::wstring sid;

    try
    {
        sid = string_sid;
    }
    catch( ... )
    {
        LocalFree( string_sid );

        throw;
    }

    LocalFree( string_sid );

    return sid;
}

// Helper function to set an environment variable for a specific user by SID.
static std::wstring GetUserEnvironmentVariableRegPath( const std::wstring& userSID )
{
    std::wstring browse( userSID );
    browse += L"\\Environment";
    return browse;
}

static bool SetUserEnvironmentVariable( const std::wstring& userSID, const wchar_t *varName, const wchar_t *value, size_t valueLen )
{
    std::wstring browse = GetUserEnvironmentVariableRegPath( userSID );

    // Write the value.
    size_t regValueLen = ( valueLen + 1 ) * sizeof( wchar_t );

    LSTATUS success = RegSetKeyValueW( HKEY_USERS, browse.c_str(), varName, REG_SZ, value, regValueLen );

    return ( success == ERROR_SUCCESS );
}

static std::wstring GetStringRegistryValue( HKEY hive, const wchar_t *regBrowse, const wchar_t *varName )
{
    // We accept all kinds of strings.
    DWORD regTypeSeeked = ( RRF_RT_REG_SZ | RRF_RT_REG_EXPAND_SZ );

    // First get the byte length of the variable.
    DWORD varByteLenOut = 0;

    LSTATUS successGetLen = RegGetValueW( hive, regBrowse, varName, regTypeSeeked, NULL, NULL, &varByteLenOut );

    // If we simply have not found the variable, we return an empty string.
    if ( successGetLen == ERROR_FILE_NOT_FOUND )
    {
        return std::wstring();
    }

    if ( successGetLen != ERROR_SUCCESS )
    {
        throw std::exception( "invalid error code in env var fetch" );
    }

    // Get the character length of the variable.
    size_t charLength = ( varByteLenOut / sizeof(wchar_t) - 1 );

    // If we are without real length, then we have no value.
    if ( charLength == 0 )
    {
        return std::wstring();
    }

    std::wstring varValue;
    varValue.resize( charLength );

    // Fetch the real content.
    LSTATUS successGetValue = RegGetValueW( hive, regBrowse, varName, regTypeSeeked, NULL, (wchar_t*)varValue.c_str(), &varByteLenOut );

    if ( successGetValue != ERROR_SUCCESS )
    {
        throw std::exception( "invalid error code in env var value fetch" );
    }

    return varValue;
}

static std::wstring GetUserEnvironmentVariable( const std::wstring& userSID, const wchar_t *varName )
{
    std::wstring browse = GetUserEnvironmentVariableRegPath( userSID );

    return GetStringRegistryValue( HKEY_USERS, browse.c_str(), varName );
}

static std::wstring GetSystemEnvironmentVariable( const wchar_t *varName )
{
    return GetStringRegistryValue( HKEY_LOCAL_MACHINE, L"System\\CurrentControlSet\\Control\\Sessionmanager\\Environment", varName );
}

static std::wstring GetEffectiveEnvironmentVariable( const std::wstring& userSID, const wchar_t *varName )
{
    // Might not be entirely correct as "empty" registry variable values still override other ones.
    // But this does things nicely anyway.

    std::wstring varValue = GetUserEnvironmentVariable( userSID, varName );

    if ( varValue.empty() )
    {
        varValue = GetSystemEnvironmentVariable( varName );
    }

    return varValue;
}

static std::wstring GetShellKnownFolder( REFKNOWNFOLDERID fid )
{
    std::wstring folderOut;
    
    wchar_t *folderPtr;

    HRESULT success = SHGetKnownFolderPath( fid, 0, NULL, &folderPtr );

    if ( !SUCCEEDED(success) )
    {
        throw std::exception( "failed to get shell known folder" );
    }
    
    try
    {
        folderOut = folderPtr;
    }
    catch( ... )
    {
        CoTaskMemFree( folderPtr );

        throw;
    }

    CoTaskMemFree( folderPtr );

    return folderOut;
}

template <typename callbackType>
static void ForAllFolders( const wchar_t *findLoc, bool recursive, const callbackType& cb )
{
    WIN32_FIND_DATAW findData;

    HANDLE findHandle;
    {
        std::wstring query( findLoc );
        query += L"\\*";

        findHandle = FindFirstFileW( query.c_str(), &findData );
    }

    if ( findHandle == INVALID_HANDLE_VALUE )
        return;

    try
    {
        do
        {
            // Ignore the default things.
            if ( findData.cFileName[0] == 0 ||
                 findData.cFileName[0] == L'.' && ( findData.cFileName[1] == L'.' && findData.cFileName[2] == 0 || findData.cFileName[1] == 0 ) )
            {
                continue;
            }
        
            // Make sure it is a directory.
            if ( ( findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ) != 0 )
            {
                // Transform into a full path.
                std::wstring fullFilePath( findLoc );
                fullFilePath += L"\\";
                fullFilePath += findData.cFileName;

                // Notify about this directory.
                cb( fullFilePath );

                if ( recursive )
                {
                    // Try scanning into this directory.
                    ForAllFolders( fullFilePath.c_str(), recursive, cb );
                }
            }
        }
        while ( FindNextFileW( findHandle, &findData ) == TRUE );
    }
    catch( ... )
    {
        FindClose( findHandle );

        throw;
    }

    FindClose( findHandle );
}

template <typename checkerCallbackType>
static std::wstring ScanForGTAGameFolder( const checkerCallbackType& cb )
{
    std::wstring theFolder;

    auto findIterCB = [&]( const std::wstring& tryFolder )
    {
        if ( cb( tryFolder.c_str() ) )
        {
            theFolder = tryFolder;
        }
    };

    std::wstring programFilesFolder = GetShellKnownFolder( FOLDERID_ProgramFilesX86 );

    // First check all program files folders.
    ForAllFolders( programFilesFolder.c_str(), false, findIterCB );

    if ( theFolder.empty() )
    {
        // Next check the Rockstar Games folder inside program files.
        std::wstring rockstarGamesFolder( programFilesFolder );
        rockstarGamesFolder += L"\\Rockstar Games";

        ForAllFolders( rockstarGamesFolder.c_str(), false, findIterCB );
    }

    if ( theFolder.empty() )
    {
        // At last, try the default steam games directory.
        std::wstring defaultSteamGamesFolder( programFilesFolder );
        defaultSteamGamesFolder += L"\\Steam\\steamapps\\common";

        ForAllFolders( defaultSteamGamesFolder.c_str(), false, findIterCB );
    }

    if ( theFolder.empty() )
    {
        // Should also scan inside of drive D:
        ForAllFolders( L"D:", false, findIterCB );
    }

    return theFolder;
}

static std::wstring GetGTASAGameDirectory( void )
{
    static std::wstring gameDir( ScanForGTAGameFolder( isGTASADirectory ) );

    return gameDir;
}

static std::wstring GetGTAVCGameDirectory( void )
{
    static std::wstring gameDir( ScanForGTAGameFolder( isGTAVCDirectory ) );

    return gameDir;
}

static std::wstring GetGTA3GameDirectory( void )
{
    static std::wstring gameDir( ScanForGTAGameFolder( isGTA3Directory ) );

    return gameDir;
}

static bool EnsureFolder( const wchar_t *folderPath )
{
    BOOL success = CreateDirectoryW( folderPath, NULL );

    if ( success == TRUE )
        return true;

    switch( GetLastError() )
    {
    case ERROR_ALREADY_EXISTS:
        return true;
    }

    return false;
}

template <typename getGameDirCallbackType>
static void UpdateGTAGameEnvironmentVariables( const std::wstring& sid, const wchar_t *gameShortix, const getGameDirCallbackType& cb )
{
    std::wstring var_name_prefix( L"GTA_" );
    var_name_prefix += gameShortix;

    std::wstring asi_var_name( var_name_prefix );
    asi_var_name += L"_ASI_DIR";

    std::wstring gta_asi_dir = GetEffectiveEnvironmentVariable( sid, asi_var_name.c_str() );

    if ( gta_asi_dir.empty() )
    {
        std::wstring gameDir = cb();

        if ( !gameDir.empty() )
        {
            gameDir += L"\\scripts";

            // Create the "scripts" directory inside of it.
            if ( EnsureFolder( gameDir.c_str() ) )
            {
                gta_asi_dir = std::move( gameDir );

                // Write the environment variable.
                SetUserEnvironmentVariable( sid, asi_var_name.c_str(), gta_asi_dir.c_str(), gta_asi_dir.size() );
            }
        }
    }

    if ( !gta_asi_dir.empty() )
    {
        std::wcout << asi_var_name << L": " << gta_asi_dir << std::endl;
    }
    else
    {
        std::wcout << L"could not determine " << asi_var_name << L" location" << std::endl;
    }

    std::wstring cleo_var_name( var_name_prefix );
    cleo_var_name += L"_CLEO_DIR";

    std::wstring gta_cleo_dir = GetEffectiveEnvironmentVariable( sid, cleo_var_name.c_str() );

    if ( gta_cleo_dir.empty() )
    {
        std::wstring cleoDir = cb();

        if ( !cleoDir.empty() )
        {
            cleoDir += L"\\cleo";

            // We create the CLEO directory if it does not exist.
            if ( EnsureFolder( cleoDir.c_str() ) )
            {
                // Take it.
                gta_cleo_dir = std::move( cleoDir );

                // Write the environment variable.
                SetUserEnvironmentVariable( sid, cleo_var_name.c_str(), gta_cleo_dir.c_str(), gta_cleo_dir.size() );
            }
        }
    }

    if ( !gta_cleo_dir.empty() )
    {
        std::wcout << cleo_var_name << L": " << gta_cleo_dir << std::endl;
    }
    else
    {
        std::wcout << L"could not determine " << cleo_var_name << L" location" << std::endl;
    }
}

int main( int, char *[] )
{
    // Get the Win32 user name that we represent.
    std::wstring username;
    {
        DWORD nchar = 0;

        GetUserNameW( NULL, &nchar );

        assert( nchar >= 1 );

        while ( true )
        {
            username.resize( nchar - 1 );

            BOOL success = GetUserNameW( (wchar_t*)username.c_str(), &nchar );

            if ( success || GetLastError() != ERROR_INSUFFICIENT_BUFFER )
            {
                break;
            }
        }
    }

    // Get the SID of the current user.
    std::wstring sid = GetCurrentUserSID();

    std::wcout << L"running as " << username << L" (" << sid << ")" << std::endl;

    std::wcout << std::endl;

    // Update plugin-sdk variable.
    {
        std::wstring plugin_sdk_path = GetEffectiveEnvironmentVariable( sid, L"PLUGIN_SDK_DIR" );

        if ( plugin_sdk_path.empty() )
        {
            std::wstring desktopFolder = GetShellKnownFolder( FOLDERID_Desktop );

            // Collect common locations of the plugin-sdk and try them first.
            {
                std::vector <std::wstring> likelyFolders;

                std::wcout << L"scanning likely folders for plugin-sdk" << std::endl;

                likelyFolders.push_back( desktopFolder + L"\\plugin-sdk" );
                likelyFolders.push_back( L"D:\\plugin-sdk" );
                likelyFolders.push_back( L"D:\\Projects\\plugin-sdk" );
                likelyFolders.push_back( GetShellKnownFolder( FOLDERID_ProgramFiles ) + L"\\plugin-sdk" );
            
                // Scan those first.
                for ( std::wstring& tryFolder : likelyFolders )
                {
                    if ( isPluginSDKDirectory( tryFolder.c_str() ) )
                    {
                        // We found one.
                        plugin_sdk_path = std::move( tryFolder );
                        break;
                    }
                }
            }

            // If still not found then we scan all folders inside the desktop folder.
            if ( plugin_sdk_path.empty() )
            {
                std::wcout << L"scanning all desktop folders for the plugin-sdk..." << std::endl;

                ForAllFolders( desktopFolder.c_str(), true,
                    [&]( const std::wstring& folderPath )
                {
                    if ( isPluginSDKDirectory( folderPath.c_str() ) )
                    {
                        plugin_sdk_path = folderPath;
                    }
                });
            }

            // If we found a new plugin-sdk path, we set it as environment variable.
            if ( !plugin_sdk_path.empty() )
            {
                SetUserEnvironmentVariable( sid, L"PLUGIN_SDK_DIR", plugin_sdk_path.c_str(), plugin_sdk_path.size() );
            }
        }
        
        if ( !plugin_sdk_path.empty() )
        {
            std::wcout << L"PLUGIN_SDK_DIR: " << plugin_sdk_path << std::endl;
        }
        else
        {
            std::wcout << L"could not determine the plugin-sdk folder" << std::endl;
        }
    }

    // Update DIRECTX9_SDK_DIR var.
    {
        std::wstring directx9_sdk_dir = GetEffectiveEnvironmentVariable( sid, L"DIRECTX9_SDK_DIR" );

        if ( directx9_sdk_dir.empty() )
        {
            std::wstring progFilesPath = GetShellKnownFolder( FOLDERID_ProgramFilesX86 );

            // Check common folders first.
            {
                std::wcout << L"scanning likely folders for DX9 SDK" << std::endl;

                std::vector <std::wstring> likelyFolders;

                likelyFolders.push_back( L"D:\\Projects\\DXSDK\\9.0" );
                likelyFolders.push_back( progFilesPath + L"\\Microsoft DirectX SDK (June 2010)" );
                
                for ( std::wstring& tryPath : likelyFolders )
                {
                    if ( isDirectX9Directory( tryPath.c_str() ) )
                    {
                        directx9_sdk_dir = std::move( tryPath );
                        break;
                    }
                }
            }

            if ( directx9_sdk_dir.empty() )
            {
                std::wcout << L"scanning program files folder (x86) for DX9 SDK" << std::endl;
                
                // Try scanning the entire program files folder (x86) for the DX9 SDK.
                ForAllFolders( progFilesPath.c_str(), false,
                    [&]( const std::wstring& tryPath )
                {
                    if ( isDirectX9Directory( tryPath.c_str() ) )
                    {
                        directx9_sdk_dir = tryPath;
                    }
                });
            }

            if ( !directx9_sdk_dir.empty() )
            {
                // Write the environment variable.
                SetUserEnvironmentVariable( sid, L"DIRECTX9_SDK_DIR", directx9_sdk_dir.c_str(), directx9_sdk_dir.size() );
            }
        }

        if ( !directx9_sdk_dir.empty() )
        {
            std::wcout << L"DIRECTX9_SDK_DIR: " << directx9_sdk_dir << std::endl;
        }
        else
        {
            std::wcout << L"could not determine DirectX9 SDK location" << std::endl;
        }
    }

    // Update RWD3D9_DIR variable.
    {
        std::wstring rwd3d9_dir = GetEffectiveEnvironmentVariable( sid, L"RWD3D9_DIR" );

        if ( rwd3d9_dir.empty() )
        {
            // We do not have much information about how the actual rwd3d9 configuration looks like.

            std::wstring desktopFolder = GetShellKnownFolder( FOLDERID_Desktop );

            // Check common folders.
            {
                std::vector <std::wstring> likelyFolders;

                likelyFolders.push_back( desktopFolder + L"\\rwd3d9" );
                likelyFolders.push_back( L"D:\\Projects\\rwd3d9" );

                for ( std::wstring& tryFolder : likelyFolders )
                {
                    if ( isRWD3D9Directory( tryFolder.c_str() ) )
                    {
                        rwd3d9_dir = std::move( tryFolder );
                        break;
                    }
                }
            }

            if ( !rwd3d9_dir.empty() )
            {
                // Write into the registry.
                SetUserEnvironmentVariable( sid, L"RWD3D9_DIR", rwd3d9_dir.c_str(), rwd3d9_dir.size() );
            }
        }

        if ( !rwd3d9_dir.empty() )
        {
            std::wcout << L"RWD3D9_DIR: " << rwd3d9_dir << std::endl;
        }
        else
        {
            std::wcout << L"could not locate rwd3d9 component location" << std::endl;
        }
    }

    // TODO: what about CLEO_SDK_*_DIR variables?

    // Update GTA_SA_ASI_DIR / GTA_SA_CLEO_DIR variables.
    UpdateGTAGameEnvironmentVariables( sid, L"SA", GetGTASAGameDirectory );
    UpdateGTAGameEnvironmentVariables( sid, L"VC", GetGTAVCGameDirectory );
    UpdateGTAGameEnvironmentVariables( sid, L"III", GetGTA3GameDirectory );

    std::wcout << std::endl;

    // Tell everyone that environment variables could have changed.
    {
        std::wcout << L"announcing environment variable update" << std::endl;

        SendMessageW( HWND_BROADCAST, WM_SETTINGCHANGE, 0, (LPARAM)L"Environment" );
    }

    // Halt to let the user read.
    getchar();

    return 0;
}
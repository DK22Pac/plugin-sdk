
#ifndef RTFS_H
#define RTFS_H

/*===========================================================================*
 *--- Include files ---------------------------------------------------------*
 *===========================================================================*/

/*---- start: ./rtfsyst.h----*/
#ifndef RTFSYST_H
#define RTFSYST_H

/**
 * \defgroup rtfsdatatypes Data Types
 * \ingroup  rtfsyst
 *
 * RenderWare File System Data Types.
 */
#include <rwplcore.h>

/****************************************************************************
 * File System Header
 ***************************************************************************/
/**
 * \ingroup rtfsdatatypes
 * \ref RTFS_MAX_NAME_LENGTH is the maximum length of a file system name. The
 *      file system name passed to any OS specific file system must not exceed
 *      RTFS_MAX_NAME_LENGTH (please refer to the OS specific documentation for
 *      more information).
 */
#define RTFS_MAX_NAME_LENGTH        5       /* File system name length */
#define RTFS_DEFAULTFILEPRIORITY    2

/* Verbose Function for debug messages */
#ifdef RTFSYSVERBOSE
#define RtFileSystemVerboseMessage(f, m) RwDebugSendMessage(rwDEBUGMESSAGE,f,m)
#else
#define RtFileSystemVerboseMessage(f, m)
#endif

/****************************************************************************
 * Enumerations
 */
/**
 * \ingroup rtfsdatatypes
 * \ref RtFileAccessFlag
 * File Access Flags.
 */
enum RtFileAccessFlag
{
   RTFILE_ACCESS_OPEN_READ   = 0x1,     /**< Flag specifying that a file will
                                             be opened in read mode. */
   RTFILE_ACCESS_OPEN_WRITE  = 0x2,     /**< Flag specifying that a file will
                                             be opened in write mode.*/
   RTFILE_ACCESS_OPEN_CREATE = 0x4,     /**< Flag specifying that a file will
                                             be created if it does not exist.*/
   RTFILE_ACCESS_OPEN_APPEND = 0x8,     /**< Flag specifying that all write
                                             will be appended to the file. */
   RTFILE_ACCESS_OPEN_ASYNC  = 0x10,    /**< Flag specifying that all write
                                             will be appended to the file. */
   /* Ensures sizeof(enum) == sizeof(RwInt32)) */
   RTFILE_ACCESS_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFileAccessFlag RtFileAccessFlag;

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSystemStatus
 * File System Status Codes.
 */
enum RtFileSystemStatus
{
    RTFS_STATUS_NOTREADY = 0x01,    /**< The file system is not ready. */
    RTFS_STATUS_READY,              /**< The file system is ready to accept
                                         commands. */
    RTFS_STATUS_DOOROPEN,           /**< The drive door is detected as being
                                         open. */
    RTFS_STATUS_NOMEDIA,            /**< There is no disc in the drive. */
    RTFS_STATUS_WRONGMEDIA,         /**< The wrong disc is in the drive. */
    RTFS_STATUS_RETRYING,           /**< The filesystem is having problems
                                         completing an operation. */
    RTFS_STATUS_FATAL,              /**< Fatal Error */
    /* Ensures sizeof(enum) == sizeof(RwInt32)) */
    RTFS_STATUS_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFileSystemStatus RtFileSystemStatus;

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileError
 * File Error Codes.
 */
enum RtFileError
{
    RTFILE_ERROR_NOERROR = 0x01,    /**< The last operation completed
                                         successfully. */
    RTFILE_ERROR_FILESYSTEM,        /**< The last operation failed because of a
                                         file system error. */
    RTFILE_ERROR_FILE,              /**< The last operation failed because of
                                         an internal error with this file. */
    RTFILE_ERROR_DISKFULL,          /**< The last write operation failed
                                         because the disk was full. */
    /* Ensures sizeof(enum) == sizeof(RwInt32)) */
    RTFILE_ERROR_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFileError RtFileError;

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSystemError
 * File System Error Codes.
 */
enum RtFileSystemError
{
    RTFS_ERROR_NOERROR = 0x01,      /**< No error */
    RTFS_ERROR_TOOMANYFILESYSTEMS,  /**< Too many file systems have been
                                         registered (set during file system
                                         initialization). */
    RTFS_ERROR_FILENOTFOUND,        /**< File not found error (set during a
                                         file open operation).*/
    RTFS_ERROR_WRITEPROTECTED,      /**< Write protected device (set during a
                                         file open operation).*/
    RTFS_ERROR_FILENAMETOOLONG,     /**< File name is too long (set during a
                                         file open operation).*/
    RTFS_ERROR_FILESYSTEMNAMEINUSE, /**< The file system name is already in use
                                         (set during file system
                                         initialization). */
    RTFS_ERROR_FILESYSTEMDEVICENAMEREGISTERED, /**< A file system has already
                                                    been registered for this
                                                    device name */
    /* Ensures sizeof(enum) == sizeof(RwInt32)) */
    RTFS_ERROR_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFileSystemError RtFileSystemError;

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileMoveMethod
 * File System Move Method.
 */
enum RtFileMoveMethod
{
    RTFILE_POS_BEGIN = 0x01,        /**< Move from the start of the file. */
    RTFILE_POS_CURRENT,             /**< Move from the current file pointer
                                         position. */
    RTFILE_POS_END,                 /**< Move from the end of the file. */
    /* Ensures sizeof(enum) == sizeof(RwInt32)) */
    RTFILE_POS_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFileMoveMethod RtFileMoveMethod;

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileStatus
 * File System Status.
 */
enum RtFileStatus
{
    RTFILE_STATUS_CLOSED = 0x01,    /**< The file is not in use. */
    RTFILE_STATUS_READY,            /**< The file is ready to accept
                                         commands. */
    RTFILE_STATUS_BUSY,             /**< The file is performing an operation.*/
    RTFILE_STATUS_ERROR,            /**< The last command did not complete
                                         successfully, use GetLastError to
                                         determine the error. However, the
                                         file is ready to accept commands. */
    RTFILE_STATUS_OPENING,          /**< The file is in the process of being
                                         opened. */
    /* Ensures sizeof(enum) == sizeof(RwInt32)) */
    RTFILE_STATUS_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFileStatus RtFileStatus;

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSystemCallBackCode represents the file system callback codes.
 *
 * \see RtFileSystemSetCallBack
 */
enum RtFileSystemCallBackCode
{
    RTFS_CALLBACKCODE_FSREGISTER = 0x01,    /**< File system registration
                                                 callback code. This callback
                                                 will be triggered when a file
                                                 system is registered
                                                 successfully. This typically
                                                 happens during a call to
                                                 \ref RtFSManagerRegister. */
    RTFS_CALLBACKCODE_FSUNREGISTER,         /**< File system unregistration
                                                 callback code. This callback
                                                 will be triggered when a file
                                                 system is unregistered. This
                                                 typically happens during a
                                                 call to
                                                 \ref RtFSManagerUnregister.
                                                  */
    /* Ensures sizeof(enum) == sizeof(RwInt32)) */
    RTFS_CALLBACKCODE_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFileSystemCallBackCode RtFileSystemCallBackCode;

/****************************************************************************
 * Forward declaration (Typedef)
 */
typedef struct  RtFileSystem        RtFileSystem;
typedef struct  RtFile              RtFile;

typedef struct _rtInt64 _rtInt64;
/**
 * \ingroup rtfsdatatypes
 * \struct _rtInt64
 * 64-bit type used by compilers that have no 64-bit support.
 */
struct _rtInt64
{
    RwInt32 low;        /**< Low part of the 64-bit number */
    RwInt32 high;       /**< High part of the 64-bit number */
};

typedef union RtInt64 RtInt64;
/**
 * \ingroup rtfsdatatypes
 * \struct RtInt64
 * 64-bit integer type.
 */
union RtInt64
{
    RWALIGN(RwInt64  supportValue, 16);  /**< Used by compilers with 64-bit support */
    RWALIGN(_rtInt64 noSupportValue, 16);/**< Used by compilers with no 64-bit support*/
};

/****************************************************************************
 * Function Pointer Typedefs
 */

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileOpenFunc
 * represents the function used to open a specific file in a defined file
 * system.
 *
 * \param fs The file system on which this file will be opened.
 * \param file The file object used to open the file.
 * \param filename Name of the file.
 * \param flags Flags used to open the file.
 * \return An error if the open operation failed, or RTFS_ERROR_NOERROR on
 *         success.
 */
typedef RtFileSystemError (*RtFileOpenFunc)  (  RtFileSystem  *fs,
                                                RtFile        *file,
                                                const RwChar  *filename,
                                                RwUInt32       flags);

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileCloseFunc
 * represents the function used to close a specific file in a defined file
 * system.
 *
 * \param file The file object used to open the file.
 */
typedef void (*RtFileCloseFunc) ( RtFile *file );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileReadFunc
 * represents the function used to read a file.
 *
 * \param file The file object used to open the file.
 * \param pBuffer The buffer used to read the file.
 * \param nBytes The number of bytes to used to read the file.
 * \return The number of bytes read.
 */
typedef RwUInt32 (*RtFileReadFunc) ( RtFile      *file,
                                     void        *pBuffer,
                                     RwUInt32     nBytes );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileWriteFunc
 * represents the function used to write to a file.
 *
 * \param file The file object used to write to the file.
 * \param pBuffer The buffer used to read the file to the file.
 * \param nBytes The number of bytes used to write to the file.
 * \return Returns The number of bytes written to the file.
 */
typedef RwUInt32 (*RtFileWriteFunc) ( RtFile      *file,
                                      const void  *pBuffer,
                                      RwUInt32     nBytes );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSetPositionFunc
 * represents the function used to set the pointer position in a file.
 *
 * \param file The file object .
 * \param nOffset File offset.
 * \param fPosition Position to calculate the actual offset from.
 * \ref RtFile
 * \ref RtFileMoveMethod
 * \return The new file position
 */
typedef RtInt64 (*RtFileSetPositionFunc) ( RtFile            *file,
                                           RwInt32            nOffset,
                                           RtFileMoveMethod   fPosition);

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSyncFunc
 * represents the function used to determine whether an operation is complete
 * (blocking if necessary).
 *
 * \param file The file object used.
 * \param block TRUE if blocking, FALSE otherwise.
 * \ref RtFile
 * \return The file status
 *
 * \see RtFileStatus
 */
typedef RtFileStatus (*RtFileSyncFunc) ( RtFile *file, RwBool block );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileAbortFunc
 * represents the function used to cancel any outstanding asynchronous
 * operation as rapidly as possible.
 *
 * \param file The file object used.
 * \return TRUE if successful, FALSE otherwise.
 */
typedef RwBool (*RtFileAbortFunc) ( RtFile *file );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileEofFunc
 * represents the function used to determine whether the file pointer is at the
 * end of the file.
 *
 * \param file The file object used.
 * \return TRUE if EOF, FALSE otherwise.
 */
typedef RwBool (*RtFileEofFunc) ( RtFile *file );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSystemGetFileFunc
 * represents the function used to get a file object from a specific file
 * system.<br><br>
 * This function must be implemented by any custom file system.
 *
 * \param fs    The file system to get the file from (note that there may.
 *              be several of the same file systems registered, with different
 *              names and device names).
 * \param index Index from which to get the object.
 * \return      A pointer to an available RtFile object, NULL otherwise.
 */
typedef RtFile * (*RtFileSystemGetFileFunc)  ( RtFileSystem *fs,
                                               RwUInt32 index );
/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSystemGetDeviceNameFunc
 * represents the function used to get a specific device name from a file
 * system.<br><br>
 * This function must be implemented by any custom file system.
 *
 * \param fs    The file system to get the file from (note that there may.
 *              be several of the same file systems registered, with different
 *              names and device names).
 * \return      The device name.
 */
typedef RwChar * (*RtFileSystemGetDeviceNameFunc) ( RtFileSystem *fs );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileGetStatusFunc
 * returns the status of this file system. This is used in asynchronous mode.
 *
 * \return The file system status.
 */
typedef RtFileStatus (*RtFileGetStatusFunc)  ( RtFile *file );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileExistsFunc
 * represents the function used to determine whether a file exists.<br><br>
 * This function must be implemented by any custom file system.
 *
 * \param fs       The file system on which to check whether the file
 *                 exists.
 * \param fileName Name of the file to check.
 * \return TRUE if the file exists, FALSE otherwise
 */
typedef RwBool (*RtFileExistsFunc)       ( RtFileSystem *fs,
                                           const RwChar *fileName );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSystemCloseFunc
 * represents the function used to close a file system.<br>
 * This function must be implemented by any custom file system.
 *
 * \param fs  The file system to close.
 */
typedef void (*RtFileSystemCloseFunc) ( RtFileSystem *fs );

/**
 * \ingroup rtfsdatatypes
 * \ref RtFileSystemCallBack
 * is the generic file system callback function prototype.
 * The file system currently allows you to set a callback
 * that will be triggered on file system registration and
 * unregistration (see \ref RtFileSystemCallBackCode).
 *
 * \param fsName  The file system name.
 */
typedef void (*RtFileSystemCallBack) ( RwChar *fsName );


/****************************************************************************
 * Structure Definition
 */

typedef struct rtFileSystemCallBacks rtFileSystemCallBacks;

#if !defined(DOXYGEN)

/*
 *  rtfsdatatypes
 *  RtFileSystemCallBacks
 * File System Callbacks.
 */
struct rtFileSystemCallBacks
{
    RtFileSystemCallBack registerCallBack;   /**< Triggered on successful
                                                  file system registration. */
    RtFileSystemCallBack unregisterCallBack; /**< Triggered on successful
                                                  file system unregistration.*/
};
#endif

typedef struct RtFileSystemFileFunctionTable RtFileSystemFileFunctionTable;
/**
 * \ingroup rtfsdatatypes
 * \struct RtFileSystemFileFunctionTable
 * The file system function table contains all the file operations a file
 * system can perform.
 */
struct RtFileSystemFileFunctionTable
{
    RtFileOpenFunc                  open;        /**< Open method triggered
                                                    when opening a file. */
    RtFileCloseFunc                 close;       /**< Close method triggered
                                                    when closing a file. */
    RtFileReadFunc                  read;        /**< Read method triggered
                                                    when reading from a file.*/
    RtFileWriteFunc                 write;       /**< Write method triggered
                                                    when writing to a file. */
    RtFileSetPositionFunc           setPosition; /**< SetPosition method
                                                    triggered when setting a
                                                    file pointer position. */
    RtFileSyncFunc                  sync;        /**< Sync method that must be
                                                    called when using an
                                                    asynchornous operation.*/
    RtFileAbortFunc                 abort;       /**< Abort method called when
                                                    an operation needs to be
                                                    aborted. */
    RtFileEofFunc                   isEOF;       /**< EOF method called when
                                                    checking for the end of a
                                                    file. */
    RtFileGetStatusFunc             getStatus;   /**< GetStatus triggered when
                                                    the current status of a
                                                    file needs to be known. */
    RtFileExistsFunc                fExists;     /**< ANSI-C file system
                                                    specific file exists. */
};

/**
 * \ingroup rtfsdatatypes
 * \struct RtFile
 * This is the base file object used by the file system.
 */
struct RtFile
{
    RtInt64                         length;     /**< The length of this file.*/
    RtInt64                         position;   /**< The file pointer
                                                     position.*/
    RwBool                          isAsync;    /**< Has this file been
                                                     opened in asynchronous
                                                     mode (TRUE if yes,
                                                     FALSE otherwise). */
    RwInt32                         priority;   /**< The file priority. */
    RtFileStatus                    status;     /**< The current status of
                                                     this file. */
    RtFileError                     error;      /**< The error code
                                                     corresponding to a
                                                     possible error that
                                                     occured on this file. */
    RtFileSystem                   *fileSystem; /**< The file system this file
                                                     belongs to. */
};

/**
 * \ingroup rtfsdatatypes
 * \struct RtFileSystem
 * This is the generic file system object. Each file system is handled by the
 * file system manager.
 */
struct RtFileSystem
{
    RwSLLink                       *next;            /**< Pointer to next file
                                                          system in the file
                                                          system list. */
    RwInt32                         maxNbOpenFiles;  /**< Maximum number of
                                                          concurrently opened
                                                          files. */
    RtFileSystemStatus              status;          /**< File system status */
    RwChar                         *deviceName;      /**< User defined file
                                                          system device name.*/
    RwBool                          defaultToAsync;  /**< If TRUE, default all
                                                     operations to asynchronous,
                                                     use \ref
                                                     RtFileSystemDefaultToAsync
                                                     to set this variable. */

    RtFileSystemGetFileFunc         fsGetObject;     /**< Get a file object
                                                          from this file system
                                                          (to be implemented by
                                                          each custom file
                                                          system). */
    RtFileSystemCloseFunc           fsClose;         /**< Perform some file
                                                          system specific free
                                                          operations. */
    RtFileSystemGetDeviceNameFunc   fsGetDeviceName; /**< Return the actual
                                                        device name, i.e. not
                                                        the user defined one
                                                        for this file system.*/
    rtFileSystemCallBacks           CallBacks;    /**< File system callbacks.*/
    RtFileSystemFileFunctionTable   fsFileFunc;   /**< File system file
                                                       function table. */
    RwChar                          name[RTFS_MAX_NAME_LENGTH];/**< File system
                                                                name \see
                                                       RTFS_MAX_NAME_LENGTH. */
};

/****************************************************************************
 * Function Prototypes
 */
#ifdef    __cplusplus
extern "C"
{
#endif /* __cplusplus */


extern RtFileSystemError
_rtFSInit( RtFileSystem *fs,
          RwInt32        maxNbFiles,
          RwChar         fsName[RTFS_MAX_NAME_LENGTH],
          RwChar        *deviceName );


extern const RwChar *
_rtGetFileNameFromDeviceName( const RwChar *fileName );

extern RwChar *
_rtFSBuildFileName( RwChar      *buffer,
                   RwInt32       bufferLength,
                   const RwChar *driveName,
                   const RwChar *filePath,
                   RwChar        separator);

extern RwBool
_rtFSFileExists( RtFileSystem *fs, const RwChar *fileName );

extern RwBool
_rtFSIsEOF( RtFile *file );

extern RwBool
RtFileSystemSetCallBack( RtFileSystem *fs,
                         RtFileSystemCallBackCode cbCode,
                         RtFileSystemCallBack     CallBack );

extern RtFileSystemCallBack
RtFileSystemGetCallBack( RtFileSystem *fs, RtFileSystemCallBackCode cbCode );

extern void
_rtFileSystemTriggerCallBack( RtFileSystem *fs, RtFileSystemCallBackCode cbCode );

extern RtFileSystemError
RtFileSystemSetDeviceName( RtFileSystem *fs, RwChar *deviceName );

extern RwChar *
RtFileSystemGetDeviceName( RtFileSystem *fs );

extern void
RtFileSystemDefaultToAsync( RtFileSystem *fs, RwBool isAsync );

extern RwBool
RtFileSystemIsDefaultedToAsync( RtFileSystem *fs );

extern RtFileSystemStatus
RtFileSystemGetStatus( RtFileSystem *fs );

#ifdef __cplusplus
}
#endif  /* cplusplus */

#endif  /* FSYSTEM_H */

/*---- end: ./rtfsyst.h----*/
/*---- start: ./rtfsmgr.h----*/

#define LASTERROR                   (_rtGetFSManager()->lastError)
#define RTFSMAN_UNLIMITED_NUM_FS    -1

/****************************************************************************
 * Typedefs
 */

/**
 * \ingroup rtfsmdatatypes
 * \ref RtFSManagerCallBackCode flags that specify the callback to set
 * A RtFSManagerCallBackCode is passed to the \ref RtFSManagerSetCallBack
 * function.
 *
 * \see RtFSManagerSetCallBack
 */
enum RtFSManagerCallBackCode
{
    RTFSM_CALLBACKCODE_ERROR = 0x01,        /**< This represents the Callback
                                                 that will trigger the error
                                                 callback. The file system
                                                 manager error callback is
                                                 triggered when a file system
                                                 manager error occurs. This
                                                 generally happen during
                                                 registration or when trying to
                                                 open a file.*/
    RTFSM_CALLBACKCODE_ERROR_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFSManagerCallBackCode RtFSManagerCallBackCode;

/**
 * \ingroup rtfsmdatatypes
 * \ref RtFSManagerError
 * File System Manager Error Codes
 */
enum RtFSManagerError
{
    RTFSM_ERROR_NOERROR = 0x01,       /**< No file system manager error.  */
    RTFSM_ERROR_INSTALL,              /**< Install to RenderWare error.   */
    RTFSM_ERROR_UNINSTALL,            /**< Uninstall from RenderWare error. */
    RTFSM_ERROR_INVALIDFS,            /**< Invalid file system specified. */
    RTFSM_ERROR_NOTREGISTRABLE,       /**< Can't register the file system. */
    RTFSM_ERROR_NOFS,                 /**< There is no file system associated
                                           with the file name passed. */
    RTFSM_ERROR_FSNAMEINUSE,          /**< The file system name is already in
                                           use. */
    RTFSM_ERROR_TOOMANYOPENFILES,     /**< The file system manager has reported
                                           that too many files were opened on
                                           the current file system. */
    /* Ensures sizeof(enum) == sizeof(RwInt32)) */
    RTFSM_ERROR_TYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RtFSManagerError RtFSManagerError;

/**
 * \ingroup rtfsmdatatypes
 * \ref RtFSManagerCallBack
 * represents the generic function prototype for a file system manager
 * callback.<br>
 *
 * \param err Error code specifying the error that occured.
 */
typedef void (*RtFSManagerCallBack)  ( RtFSManagerError err );

typedef struct FSManagerCallBacks FSManagerCallBacks;

#if !defined(DOXYGEN)
/*
 * RtFSManagerCallBacks
 * File system manager callbacks.
 */
struct FSManagerCallBacks
{
    RtFSManagerCallBack errorCallBack; /* A file system manager error
                                            occured. */
};

typedef struct RtFSManager RtFSManager;


/*
 * Generic File system manager object.
 * This file system allows for an arbitrary or set number of file systems.
 * This is deterrmined by the maxNbFS parameter passed to RtFSManagerOpen.
 */
struct RtFSManager
{
    RwSingleList         fs;            /**< Single link list containing the
                                             file systems this manager is
                                             managing */
    RwInt32              maxNbFS;       /**< Maximum number of file systems
                                             this manager can manage */
    RwInt32              curNbFS;       /**< Current number of file systems
                                             this manager is managing */
    RtFSManagerError     lastError;     /**< Last error */
    RwFileFunctions      stdInterface;  /**< Standard interface */
    FSManagerCallBacks   CallBacks;     /**< File system manager callbacks */
};
#endif
/****************************************************************************
 * Function Prototypes
 */
#ifdef    __cplusplus
extern "C"
{
#endif /* __cplusplus */

extern RwBool
RtFSManagerOpen( RwInt32 maxNbFS );

extern void
RtFSManagerClose( void );

extern RwBool
RtFSManagerSetCallBack( RtFSManagerCallBackCode cbCode,
                        RtFSManagerCallBack CallBack);

extern RwBool
RtFSManagerRegister( RtFileSystem *fs );

extern void
RtFSManagerUnregister( RtFileSystem *fs );

extern RtFileSystem *
RtFSManagerGetFileSystemFromName( RwChar *fsName );

extern RtFile *
RtFSManagerFOpen( const RwChar *filename, RtFileAccessFlag access );

extern RtFileSystem *
RtFSManagerGetFileSystemFromFileName( const RwChar *fileName );

extern void
RtFSManagerSetDefaultFileSystem( RtFileSystem *fs );

extern RtFileSystem *
RtFSManagerGetDefaultFileSystem( void );

extern RwBool
_rtFSManagerIsNewFSRegistrable( void );

extern RwBool
_rtFSManagerIsFSNameInUse( RwChar *fsName );

extern RtFileSystem *
_rtGetFileSystemFromDeviceName( const RwChar *deviceName );

extern RtFile *
_rtFSManagerFOpenOnFS( RtFileSystem *fs,
                       const RwChar * name,
                       RtFileAccessFlag access );

RtFSManager  *_rtGetFSManager( void );

#ifdef __cplusplus
}
#endif  /* cplusplus */

/*---- end: ./rtfsmgr.h----*/

/*---- start: ./win/fsystplatform.h----*/
/*---- start: ./win/rtfswin.h----*/

/**
 * \defgroup rtfswin Windows
 * \ingroup  rtfsyst
 * 
 * The Windows file system allows for synchronous and asynchronous file 
 * operations to be performed. This file system uses a driver internal 
 * read and write bufferring system.
 */

/**
 * \defgroup rtfswindatatypes Data Types
 * \ingroup  rtfswin
 * 
 * Windows File System Data Types.
 */
#include <windows.h>

#define WIN_FS_MAX_PATH_LENGTH 256

typedef struct RtWinFile RtWinFile;
/**
 * \ingroup rtfswindatatypes
 * \struct RtWinFile
 * File object used by the Windows file system. It describes the current state
 * of a specific file on the Windows file system.
 */
struct RtWinFile
{
    RtFile       file;          /**< Parent \ref RtFile object. */
    HANDLE       fp;            /**< Windows file handle. */
    OVERLAPPED   overlap;       /**< Structure for dealing with asynchronous
                                     file loading. */
    HANDLE       eventHandle;   /**< Event handle for dealing with asynchronous
                                     file loading. */
};

typedef struct RtWinFileSystem RtWinFileSystem;
/**
 * \ingroup rtfswindatatypes
 * \struct RtWinFileSystem
 * This represents the Windows file system. The Windows file system
 * contains a number of Windows specific files. This number is specified
 * during the initialization (see \ref RtWinFSystemInit).
 */
struct RtWinFileSystem
{
    RtFileSystem  wfs;          /**< Parent \ref RtFileSystem object. */
    RtWinFile    *files;        /**< Windows file system files. */
};

#ifdef    __cplusplus
extern "C"
{
#endif /* __cplusplus */


RtFileSystem      * 
RtWinFSystemInit( RwInt32 maxNbOpenFiles, RwChar *deviceName, RwChar *fileSystemName );

#ifdef __cplusplus
}
#endif  /* cplusplus */

/*---- end: ./win/rtfswin.h----*/

extern CRITICAL_SECTION section;

#define RTFS_INITIALIZE_INTERRUPT_HANDLING InitializeCriticalSection(&section)
#define RTFS_DISABLE_INTERRUPT EnterCriticalSection(&section)
#define RTFS_ENABLE_INTERRUPT  LeaveCriticalSection(&section)
/*---- end: ./win/fsystplatform.h----*/

#endif /* RTFS_H */



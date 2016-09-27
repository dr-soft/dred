// Copyright (C) 2016 David Reid. See included LICENSE file.

#define DRED_PACKAGE_FEATURE_EDITOR             (1 << 0)
#define DRED_PACKAGE_FEATURE_CMDLINE_FUNCTION   (1 << 1)

// Editor management.
typedef dred_editor* (* dred_package_create_editor_proc)(dred_package* pPackage, dred_context* pDred, dred_control* pParent, float sizeX, float sizeY, const char* filePathAbsolute);
typedef void         (* dred_package_delete_editor_proc)(dred_package* pPackage, dred_editor* pEditor);

// Command line functions.
typedef bool (* dred_package_try_exec_cmdline_func_proc)(dred_package* pPackage, int argc, char** argv, int* pResult);

struct dred_package
{
    uint32_t featureFlags;

    union
    {
        struct
        {
            dred_package_create_editor_proc onCreateEditor;
            dred_package_delete_editor_proc onDeleteEditor;
        } editor;

        struct
        {
            dred_package_try_exec_cmdline_func_proc onTryExecCmdLineFunc;
        } cmdlinefunc;
    } cbs;


    //
    // [Internal Use Only]
    //
    dred_dl _dl;    // A handle to the .dll or .so library.
};


///////////////////////////////////////////////////////////////////////////////
//
// DLL/SO Entry Points
//
///////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
typedef dred_package* (* dred_package_create_proc)();
DRED_PACKAGE_API dred_package* dred_package_create();

typedef void (* dred_package_delete_proc)(dred_package* pPackage);
DRED_PACKAGE_API void dred_package_delete(dred_package* pPackage);
#ifdef __cplusplus
}
#endif
// Copyright (C) 2017 David Reid. See included LICENSE file.

// These #defines enable us to load large files on Linux platforms. They need to be placed before including any headers.
#ifndef _WIN32
#ifndef _LARGEFILE64_SOURCE
#define _LARGEFILE64_SOURCE
#endif
#ifndef _FILE_OFFSET_BITS
#define _FILE_OFFSET_BITS 64
#endif
#endif

// File I/O is 64-bit by default on macOS
#ifdef __APPLE__
#define off64_t off_t
#define fopen64 fopen
#endif


// Standard headers.
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>

// Platform headers.
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/file.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>
#include <glib-object.h>
#include <fontconfig/fontconfig.h>
#include <semaphore.h>
#include <pthread.h>
#include <dlfcn.h>
#endif


// External libraries.
#include "../external/dr_text_engine.h"


#ifndef dred_assert
#define dred_assert(condition)  dtk_assert(condition)
#endif
#ifndef dred_malloc
#define dred_malloc(sz)         dtk_malloc(sz);
#endif
#ifndef dred_calloc
#define dred_calloc(c, sz)      dtk_calloc(c, sz)
#endif
#ifndef dred_realloc
#define dred_realloc(p, sz)     dtk_realloc(p, sz)
#endif
#ifndef dred_free
#define dred_free(p)            dtk_free(p)
#endif
#ifndef dred_zero_memory
#define dred_zero_memory(p, sz) dtk_zero_memory(p, sz)
#endif
#define dred_zero_object(p)     dred_zero_memory((p), sizeof(*(p)))

#define dred_count_of(obj)      dtk_countof(obj)


#ifdef _MSC_VER
#define DRED_INLINE static __forceinline
#else
#define DRED_INLINE static inline
#endif

typedef int dred_result;
#define DRED_SUCCESS         0
#define DRED_ERROR          -1
#define DRED_INVALID_ARGS   -2
#define DRED_OUT_OF_MEMORY  -3


// dred header files.
#ifdef __cplusplus
extern "C" {
#endif
#include "dtk/dtk.h"
#include "dred_autogenerated.h"
#include "dred_build_config.h"
#include "dred_types.h"
#include "dred_events.h"
#include "dred_string_pool.h"
#include "dred_ipc.h"
#include "dred_dl.h"
#include "gui/dred_gui.h"
#include "gui/dred_color_button.h"
#include "gui/dred_checkbox.h"
#include "gui/dred_textview.h"
#include "gui/dred_textbox.h"
#include "gui/dred_info_bar.h"
#include "gui/dred_cmdbar.h"
#include "dred_cmdbox_cmdlist.h"
#include "dred_cmdbox.h"
#include "gui/dred_cmdbar_popup.h"
#include "dred_fs.h"
#include "dred_alias_map.h"
#include "dred_config.h"
#include "dred_shortcuts.h"
#include "dred_editor.h"
#include "dred_settings_editor.h"
#include "dred_text_editor.h"
#include "dred_font.h"
#include "dred_font_library.h"
#include "dred_image.h"
#include "dred_image_library.h"
#include "dred_menus.h"
#include "dred_about_dialog.h"
#include "dred_settings_dialog.h"
#include "dred_printing.h"
#include "dred_context.h"
#include "dred_platform_layer.h"
#include "dred_commands.h"
#include "dred_misc.h"
#include "dred_stock_themes.h"
#include "dred_codegen.h"
#include "dred_package.h"
#include "dred_package_library.h"
#include "cmdline_funcs/dred_main_f.h"
#ifdef __cplusplus
}
#endif

#include "dred_stretchy_buffer.h"   // stb_stretchy_buffer with a C++ fix. Remove this once this is addressed upstream.

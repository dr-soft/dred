// Copyright (C) 2016 David Reid. See included LICENSE file.

// This file was automatically generated by the pre-build tool. Do not modify.

#define DRED_STOCK_IMAGE_ID_CROSS 0
#define DRED_STOCK_IMAGE_ID_ARROW_RIGHT 1
#define DRED_STOCK_IMAGE_ID_ARROW_RIGHT_DOWN 2


#define DRED_CONFIG_VARIABLE_DECLARATIONS \
dr_bool32 showTabBar; \
dr_bool32 showMenuBar; \
dr_bool32 autoHideCmdBar; \
dr_bool32 enableAutoReload; \
dr_bool32 useDefaultWindowPos; \
int windowPosX; \
int windowPosY; \
int windowWidth; \
int windowHeight; \
dr_bool32 windowMaximized; \
float uiScale; \
dred_font* pUIFont; \
dred_color cmdbarBGColor; \
dred_color cmdbarBGColorActive; \
dred_font* pCmdbarTBFont; \
dred_color cmdbarTextColor; \
dred_color cmdbarTextColorActive; \
float cmdbarPaddingX; \
float cmdbarPaddingY; \
dred_color tabgroupBGColor; \
dred_color tabBGColorInvactive; \
dred_color tabBGColorActive; \
dred_color tabBGColorHovered; \
dred_font* tabFont; \
dred_color tabTextColor; \
dred_color tabTextColorActive; \
dred_color tabTextColorHovered; \
float tabPadding; \
dr_bool32 tabShowCloseButton; \
dred_color tabCloseButtonColor; \
dred_font* pTextEditorFont; \
dred_color textEditorTextColor; \
dred_color textEditorBGColor; \
dred_color textEditorCursorColor; \
float textEditorCursorWidth; \
dred_color textEditorSelectionBGColor; \
dred_color textEditorActiveLineColor; \
dr_bool32 textEditorShowLineNumbers; \
dred_color textEditorLineNumbersColor; \
dred_color textEditorLineNumbersBGColor; \
float textEditorLineNumbersPadding; \
dred_color textEditorSBTrackColor; \
dred_color textEditorSBThumbColor; \
dred_color textEditorSBThumbColorHovered; \
dred_color textEditorSBThumbColorPressed; \
float textEditorSBSize; \
dr_bool32 textEditorShowScrollbarHorz; \
dr_bool32 textEditorShowScrollbarVert; \
dr_bool32 textEditorEnableExcessScrolling; \
dr_bool32 textEditorTabsToSpacesEnabled; \
int textEditorTabSizeInSpaces; \
float textEditorScale; \
dr_bool32 textEditorEnableAutoIndent; \
dr_bool32 textEditorEnableWordWrap; \
dr_bool32 textEditorEnableDragAndDrop; \
dred_color cppCommentTextColor; \
dred_color cppStringTextColor; \
dred_color cppKeywordTextColor;


#define DRED_STOCK_SHORTCUT_COUNT 23
#define DRED_SHORTCUT_ID_NONE 0
#define DRED_SHORTCUT_ID_FILE_NEW 1
#define DRED_SHORTCUT_ID_FILE_OPEN 2
#define DRED_SHORTCUT_ID_FILE_SAVE 3
#define DRED_SHORTCUT_ID_FILE_SAVE_ALL 4
#define DRED_SHORTCUT_ID_FILE_CLOSE 5
#define DRED_SHORTCUT_ID_FILE_CLOSE_ALL 6
#define DRED_SHORTCUT_ID_FILE_PRINT 7
#define DRED_SHORTCUT_ID_FILE_RELOAD 8
#define DRED_SHORTCUT_ID_EDIT_UNDO 9
#define DRED_SHORTCUT_ID_EDIT_REDO 10
#define DRED_SHORTCUT_ID_EDIT_CUT 11
#define DRED_SHORTCUT_ID_EDIT_COPY 12
#define DRED_SHORTCUT_ID_EDIT_PASTE 13
#define DRED_SHORTCUT_ID_EDIT_DELETE 14
#define DRED_SHORTCUT_ID_EDIT_SELECT_ALL 15
#define DRED_SHORTCUT_ID_EDIT_UNINDENT 16
#define DRED_SHORTCUT_ID_FIND_FIND 17
#define DRED_SHORTCUT_ID_FIND_REPLACE 18
#define DRED_SHORTCUT_ID_FIND_GOTO 19
#define DRED_SHORTCUT_ID_NEXT_TAB 20
#define DRED_SHORTCUT_ID_PREV_TAB 21
#define DRED_SHORTCUT_ID_EXIT 22

#define DRED_SHORTCUT_NAME_NONE ""
#define DRED_SHORTCUT_NAME_FILE_NEW "file.new"
#define DRED_SHORTCUT_NAME_FILE_OPEN "file.open"
#define DRED_SHORTCUT_NAME_FILE_SAVE "file.save"
#define DRED_SHORTCUT_NAME_FILE_SAVE_ALL "file.save-all"
#define DRED_SHORTCUT_NAME_FILE_CLOSE "file.close"
#define DRED_SHORTCUT_NAME_FILE_CLOSE_ALL "file.close-all"
#define DRED_SHORTCUT_NAME_FILE_PRINT "file.print"
#define DRED_SHORTCUT_NAME_FILE_RELOAD "file.reload"
#define DRED_SHORTCUT_NAME_EDIT_UNDO "edit.undo"
#define DRED_SHORTCUT_NAME_EDIT_REDO "edit.redo"
#define DRED_SHORTCUT_NAME_EDIT_CUT "edit.cut"
#define DRED_SHORTCUT_NAME_EDIT_COPY "edit.copy"
#define DRED_SHORTCUT_NAME_EDIT_PASTE "edit.paste"
#define DRED_SHORTCUT_NAME_EDIT_DELETE "edit.delete"
#define DRED_SHORTCUT_NAME_EDIT_SELECT_ALL "edit.select-all"
#define DRED_SHORTCUT_NAME_EDIT_UNINDENT "edit.unindent"
#define DRED_SHORTCUT_NAME_FIND_FIND "find.find"
#define DRED_SHORTCUT_NAME_FIND_REPLACE "find.replace"
#define DRED_SHORTCUT_NAME_FIND_GOTO "find.goto"
#define DRED_SHORTCUT_NAME_NEXT_TAB "next-tab"
#define DRED_SHORTCUT_NAME_PREV_TAB "prev-tab"
#define DRED_SHORTCUT_NAME_EXIT "exit"


#define DRED_STOCK_MENU_ITEM_COUNT 82
#define DRED_MENU_ITEM_ID_NONE 0
#define DRED_MENU_ITEM_ID_SEPARATOR 1
#define DRED_MENU_ITEM_ID_GENERIC_HELP_ABOUT 2
#define DRED_MENU_ITEM_ID_GENERIC_SETTINGS_THEMES_DARK 3
#define DRED_MENU_ITEM_ID_GENERIC_SETTINGS_THEMES_LIGHT 4
#define DRED_MENU_ITEM_ID_GENERIC_SETTINGS_THEMES 5
#define DRED_MENU_ITEM_ID_GENERIC_SETTINGS_SETTINGS 6
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_FILE_NEW 7
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_FILE_OPEN 8
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_FILE_OPEN_RECENT 9
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_FILE_OPEN_FAVOURITE 10
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_FILE_EXIT 11
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_VIEW_TABBARS 12
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_VIEW_CMDBAR 13
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_FILE 14
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_VIEW 15
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_SETTINGS 16
#define DRED_MENU_ITEM_ID_NOTHINGOPEN_HELP 17
#define DRED_MENU_ITEM_ID_TEXT_FILE_NEW 18
#define DRED_MENU_ITEM_ID_TEXT_FILE_OPEN 19
#define DRED_MENU_ITEM_ID_TEXT_FILE_OPEN_RECENT 20
#define DRED_MENU_ITEM_ID_TEXT_FILE_OPEN_FAVOURITE 21
#define DRED_MENU_ITEM_ID_TEXT_FILE_ADDFAVOURITE 22
#define DRED_MENU_ITEM_ID_TEXT_FILE_REMOVEFAVOURITE 23
#define DRED_MENU_ITEM_ID_TEXT_FILE_SAVE 24
#define DRED_MENU_ITEM_ID_TEXT_FILE_SAVEAS 25
#define DRED_MENU_ITEM_ID_TEXT_FILE_SAVEALL 26
#define DRED_MENU_ITEM_ID_TEXT_FILE_CLOSE 27
#define DRED_MENU_ITEM_ID_TEXT_FILE_CLOSEALL 28
#define DRED_MENU_ITEM_ID_TEXT_FILE_PRINT 29
#define DRED_MENU_ITEM_ID_TEXT_FILE_EXIT 30
#define DRED_MENU_ITEM_ID_TEXT_EDIT_UNDO 31
#define DRED_MENU_ITEM_ID_TEXT_EDIT_REDO 32
#define DRED_MENU_ITEM_ID_TEXT_EDIT_CUT 33
#define DRED_MENU_ITEM_ID_TEXT_EDIT_COPY 34
#define DRED_MENU_ITEM_ID_TEXT_EDIT_PASTE 35
#define DRED_MENU_ITEM_ID_TEXT_EDIT_DELETE 36
#define DRED_MENU_ITEM_ID_TEXT_EDIT_SELECTALL 37
#define DRED_MENU_ITEM_ID_TEXT_VIEW_TABBARS 38
#define DRED_MENU_ITEM_ID_TEXT_VIEW_CMDBAR 39
#define DRED_MENU_ITEM_ID_TEXT_VIEW_LINENUMBERS 40
#define DRED_MENU_ITEM_ID_TEXT_VIEW_RESETZOOM 41
#define DRED_MENU_ITEM_ID_TEXT_VIEW_WORDWRAP 42
#define DRED_MENU_ITEM_ID_TEXT_FIND_FIND 43
#define DRED_MENU_ITEM_ID_TEXT_FIND_REPLACE 44
#define DRED_MENU_ITEM_ID_TEXT_FIND_GOTO 45
#define DRED_MENU_ITEM_ID_TEXT_FILE 46
#define DRED_MENU_ITEM_ID_TEXT_EDIT 47
#define DRED_MENU_ITEM_ID_TEXT_VIEW 48
#define DRED_MENU_ITEM_ID_TEXT_FIND 49
#define DRED_MENU_ITEM_ID_TEXT_SETTINGS 50
#define DRED_MENU_ITEM_ID_TEXT_HELP 51
#define DRED_MENU_ITEM_ID_TEXT_POPUP_UNDO 52
#define DRED_MENU_ITEM_ID_TEXT_POPUP_REDO 53
#define DRED_MENU_ITEM_ID_TEXT_POPUP_CUT 54
#define DRED_MENU_ITEM_ID_TEXT_POPUP_COPY 55
#define DRED_MENU_ITEM_ID_TEXT_POPUP_PASTE 56
#define DRED_MENU_ITEM_ID_TEXT_POPUP_DELETE 57
#define DRED_MENU_ITEM_ID_TEXT_POPUP_SELECTALL 58
#define DRED_MENU_ITEM_ID_TABPOPUP_SAVE 59
#define DRED_MENU_ITEM_ID_TABPOPUP_SAVEAS 60
#define DRED_MENU_ITEM_ID_TABPOPUP_SAVEALL 61
#define DRED_MENU_ITEM_ID_TABPOPUP_CLOSE 62
#define DRED_MENU_ITEM_ID_TABPOPUP_CLOSEALL 63
#define DRED_MENU_ITEM_ID_TABPOPUP_ADDFAVOURITE 64
#define DRED_MENU_ITEM_ID_TABPOPUP_REMOVEFAVOURITE 65
#define DRED_MENU_ITEM_ID_RECENT_FILE_0 128
#define DRED_MENU_ITEM_ID_FAVOURITE_FILE_0 138
#define DRED_MENU_ITEM_ID_THEME_0 1162
#define DRED_MENU_ITEM_ID_USER 2186

#define DRED_STOCK_MENU_ITEM_ID_COUNT 66

typedef struct
{
    dtk_menu genericHelp;
    dtk_menu genericSettingsThemes;
    dtk_menu genericSettings;
    dtk_menu recentFiles;
    dtk_menu favouriteFiles;
    dtk_menu nothingopenFile;
    dtk_menu nothingopenView;
    dtk_menu nothingopen;
    dtk_menu textFile;
    dtk_menu textEdit;
    dtk_menu textView;
    dtk_menu textFind;
    dtk_menu text;
    dtk_menu textPopup;
    dtk_menu tabpopup;
} dred_stock_menus;


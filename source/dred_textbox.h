// A dred_textbox is a dred_control that has a child drgui_textbox object.

#define DRED_CONTROL_TYPE_TEXTBOX  "dred.textbox"

typedef dred_control dred_textbox;

typedef void (* dred_textbox_on_cursor_move_proc)(dred_textbox* pTextBox);
typedef void (* dred_textbox_on_undo_point_changed_proc)(dred_textbox* pTextBox, unsigned int iUndoPoint);


// dred_textbox_create()
dred_textbox* dred_textbox_create(dred_context* pDred, dred_control* pParent);

// dred_textbox_delete()
void dred_textbox_delete(dred_textbox* pTextBox);


// Determines whether or not this textbox has the keyboard capture.
//
// This will return true if the inner text box has the capture, which is what makes this different to dred_control_has_keyboard_capture().
bool dred_textbox_has_keyboard_capture(dred_textbox* pTextBox);


// Sets the text of the text box.
void dred_textbox_set_text(dred_textbox* pTextBox, const char* text);

// Retrieves the text of the text box.
size_t dred_textbox_get_text(dred_textbox* pTextBox, char* textOut, size_t textOutSize);


// Sets the font to use with the given text box.
void dred_textbox_set_font(dred_textbox* pTextBox, drgui_font* pFont);

// Retrieves the font of the given text box.
drgui_font* dred_textbox_get_font(dred_textbox* pTextBox);

// Sets the color of the text in teh given text box.
void dred_textbox_set_text_color(dred_textbox* pTextBox, drgui_color color);

// Sets the background color of the given text box.
void dred_textbox_set_background_color(dred_textbox* pTextBox, drgui_color color);

// Sets the background color for the line the caret is currently sitting on.
void dred_textbox_set_active_line_background_color(dred_textbox* pTextBox, drgui_color color);

// Sets the width of the text cursor.
void dred_textbox_set_cursor_width(dred_textbox* pTextBox, float cursorWidth);

// Retrieves the width of the text cursor.
float dred_textbox_get_cursor_width(dred_textbox* pTextBox);

// Sets the color of the cursor of the given text box.
void dred_textbox_set_cursor_color(dred_textbox* pTextBox, drgui_color color);

// Sets the border color of the given text box.
void dred_textbox_set_border_color(dred_textbox* pTextBox, drgui_color color);

// Sets the border width of the given text box.
void dred_textbox_set_border_width(dred_textbox* pTextBox, float borderWidth);

// Sets the amount of padding to apply to given text box.
void dred_textbox_set_padding(dred_textbox* pTextBox, float padding);

// Retrieves the amound of vertical padding to apply to the given text box.
float dred_textbox_get_padding_vert(dred_textbox* pTextBox);

// Retrieves the amound of horizontal padding to apply to the given text box.
float dred_textbox_get_padding_horz(dred_textbox* pTextBox);

// Sets the vertical alignment of the given text box.
void dred_textbox_set_vertical_align(dred_textbox* pTextBox, drgui_text_engine_alignment align);

// Sets the horizontal alignment of the given text box.
void dred_textbox_set_horizontal_align(dred_textbox* pTextBox, drgui_text_engine_alignment align);

// Sets the width of the line numbers.
void dred_textbox_set_line_numbers_width(dred_textbox* pTextBox, float lineNumbersWidth);

// Retrieves the width of the line numbers.
float dred_textbox_get_line_numbers_width(dred_textbox* pTextBox);


// Sets the blink rate of the cursor in milliseconds.
void dred_textbox_set_cursor_blink_rate(dred_textbox* pTextBox, unsigned int blinkRateInMilliseconds);

// Moves the caret to the end of the text.
void dred_textbox_move_cursor_to_end_of_text(dred_textbox* pTextBox);

// Moves the caret to the beginning of the line at the given index.
void dred_textbox_move_cursor_to_start_of_line_by_index(dred_textbox* pTextBox, size_t iLine);

// Determines whether or not anything is selected in the given text box.
bool dred_textbox_is_anything_selected(dred_textbox* pTextBox);

// Selects all of the text inside the text box.
void dred_textbox_select_all(dred_textbox* pTextBox);

// Deselect everything.
void dred_textbox_deselect_all(dred_textbox* pTextBox);

// Retrieves a copy of the selected text.
//
// This returns the length of the selected text. Call this once with <textOut> set to NULL to calculate the required size of the
// buffer.
//
// If the output buffer is not larger enough, the string will be truncated.
size_t dred_textbox_get_selected_text(dred_textbox* pTextBox, char* textOut, size_t textOutLength);

// Deletes the character to the right of the cursor.
//
// @return True if the text within the text engine has changed.
bool dred_textbox_delete_character_to_right_of_cursor(dred_textbox* pTextBox);

// Deletes the currently selected text.
//
// @return True if the text within the text engine has changed.
bool dred_textbox_delete_selected_text(dred_textbox* pTextBox);

// Inserts a string of text at the position of the cursor.
//
// @return True if the text within the text engine has changed.
bool dred_textbox_insert_text_at_cursor(dred_textbox* pTextBox, const char* text);

// Performs an undo operation.
bool dred_textbox_undo(dred_textbox* pTextBox);

// Performs a redo operation.
bool dred_textbox_redo(dred_textbox* pTextBox);

// Retrieves the number of undo points remaining.
unsigned int dred_textbox_get_undo_points_remaining_count(dred_textbox* pTextBox);

// Retrieves the number of redo points remaining.
unsigned int dred_textbox_get_redo_points_remaining_count(dred_textbox* pTextBox);

// Clears the undo/redo stack.
void dred_textbox_clear_undo_stack(dred_textbox* pTextBox);

// Retrieves the index of the line the cursor is current sitting on.
size_t dred_textbox_get_cursor_line(dred_textbox* pTextBox);

// Retrieves the index of the column the cursor is current sitting on.
size_t dred_textbox_get_cursor_column(dred_textbox* pTextBox);

// Retrieves the number of lines in the given text box.
size_t dred_textbox_get_line_count(dred_textbox* pTextBox);


// Finds and selects the next occurance of the given string, starting from the cursor and looping back to the start.
bool dred_textbox_find_and_select_next(dred_textbox* pTextBox, const char* text);

// Finds the next occurance of the given string and replaces it with another.
bool dred_textbox_find_and_replace_next(dred_textbox* pTextBox, const char* text, const char* replacement);

// Finds every occurance of the given string and replaces it with another.
bool dred_textbox_find_and_replace_all(dred_textbox* pTextBox, const char* text, const char* replacement);


// Shows the line numbers.
void dred_textbox_show_line_numbers(dred_textbox* pTextBox);

// Hides the line numbers.
void dred_textbox_hide_line_numbers(dred_textbox* pTextBox);


// Disables the vertical scrollbar.
void dred_textbox_disable_vertical_scrollbar(dred_textbox* pTextBox);

// Enables the vertical scrollbar.
void dred_textbox_enable_vertical_scrollbar(dred_textbox* pTextBox);

// Disables the horizontal scrollbar.
void dred_textbox_disable_horizontal_scrollbar(dred_textbox* pTextBox);

// Enables the horizontal scrollbar.
void dred_textbox_enable_horizontal_scrollbar(dred_textbox* pTextBox);


// Sets the function to call when the cursor moves.
void dred_textbox_set_on_cursor_move(dred_textbox* pTextBox, dred_textbox_on_cursor_move_proc proc);

// Sets the function to call when the undo point changes.
void dred_textbox_set_on_undo_point_changed(dred_textbox* pTextBox, dred_textbox_on_undo_point_changed_proc proc);


// Function for explicitly handling the on_mouse_button_up event.
void dred_textbox_on_mouse_button_up(dred_textbox* pTextBox, int mouseButton, int mousePosX, int mousePosY, int stateFlags);

// Function for explicitly handling the on_mouse_wheel event.
void dred_textbox_on_mouse_wheel(dred_textbox* pTextBox, int delta, int mousePosX, int mousePosY, int stateFlags);

// Function for explicitly handling the on_key_down event.
void dred_textbox_on_key_down(dred_textbox* pTextBox, drgui_key key, int stateFlags);

// Function for explicitly handling the on_key_up event.
void dred_textbox_on_key_up(dred_textbox* pTextBox, drgui_key key, int stateFlags);

// Function for explicitly handling the on_printable_key_down event.
void dred_textbox_on_printable_key_down(dred_textbox* pTextBox, uint32_t utf32, int stateFlags);
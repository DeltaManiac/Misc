/*
4coder_default_bidings.cpp - Supplies the default bindings used for default 4coder behavior.
*/

// TOP

#if !defined(FCODER_DEFAULT_BINDINGS_CPP)
#define FCODER_DEFAULT_BINDINGS_CPP

#include "4coder_default_include.cpp"

// NOTE(allen|a4.0.22): This no longer serves as very good example code.
// Good example code will be coming soon, but in the mean time you can go
// to 4coder_remapping_commands.cpp for examples of what binding code looks like.

CUSTOM_COMMAND_SIG( hello ) {


    print_message( app, "Hello Delta.", sizeof( "Hello Delta." ) - 1 );
    // char a;

    // Partial_Cursor cursor;
    // unsigned int access = AccessOpen;
    // View_Summary view = get_active_view(app, access);
    // Buffer_Summary buffer = get_buffer(app, view.buffer_id, access);
    // // buffer_read_range(app,&buffer,0,buffer.size,&a);
    // // buffer_compute_cursor(app,&buffer,Buffer_Seek,&cursor)
    // print_message(app,&a,sizeof(a));
    // buffer_replace_range(app, &buffer, 0, 0,"//" , sizeof("//"));

     //TODO: Create a better comment and uncomment featur
     //Refer 4coder_combined_write_commands.cpp:write_named_comment_string instead of the above
     }
void delta_custom( Bind_Helper *context){
begin_map(context, mapid_global);
bind(context,'/',MDFR_CTRL,hello);
bind(context, 'p', MDFR_CTRL, open_panel_vsplit);
bind(context, '_', MDFR_CTRL, open_panel_hsplit);
bind(context, 'P', MDFR_CTRL, close_panel);
bind(context, ',', MDFR_CTRL, change_active_panel);
bind(context, '<', MDFR_CTRL, change_active_panel_backwards);
bind(context, 'n', MDFR_CTRL, interactive_new);
bind(context, 'o', MDFR_CTRL, interactive_open_or_new);
bind(context, 'o', MDFR_ALT, open_in_other);
bind(context, 'k', MDFR_CTRL, interactive_kill_buffer);
bind(context, 'i', MDFR_CTRL, interactive_switch_buffer);
bind(context, 'h', MDFR_CTRL, project_go_to_root_directory);
bind(context, 'S', MDFR_CTRL, save_all_dirty_buffers);
bind(context, 'c', MDFR_ALT, open_color_tweaker);
bind(context, '.', MDFR_ALT, change_to_build_panel);
bind(context, ',', MDFR_ALT, close_build_panel);
bind(context, 'n', MDFR_ALT, goto_next_jump_no_skips_sticky);
bind(context, 'N', MDFR_ALT, goto_prev_jump_no_skips_sticky);
bind(context, 'M', MDFR_ALT, goto_first_jump_sticky);
bind(context, 'm', MDFR_ALT, build_in_build_panel);
bind(context, 'z', MDFR_ALT, execute_any_cli);
bind(context, 'Z', MDFR_ALT, execute_previous_cli);
bind(context, 'x', MDFR_ALT, execute_arbitrary_command);
bind(context, 'W', MDFR_ALT, show_scrollbar);
bind(context, 'w', MDFR_ALT, hide_scrollbar);
bind(context, 'b', MDFR_ALT, toggle_filebar);
bind(context, '@', MDFR_ALT, toggle_mouse);
bind(context, 'E', MDFR_ALT, exit_4coder);
bind(context, '+', MDFR_CTRL, increase_face_size);
bind(context, '-', MDFR_CTRL, decrease_face_size);
bind(context, key_f1, MDFR_NONE, project_fkey_command);
bind(context, key_f2, MDFR_NONE, project_fkey_command);
bind(context, key_f3, MDFR_NONE, project_fkey_command);
bind(context, key_f4, MDFR_NONE, project_fkey_command);
bind(context, key_f5, MDFR_NONE, project_fkey_command);
bind(context, key_f6, MDFR_NONE, project_fkey_command);
bind(context, key_f7, MDFR_NONE, project_fkey_command);
bind(context, key_f8, MDFR_NONE, project_fkey_command);
bind(context, key_f9, MDFR_NONE, project_fkey_command);
bind(context, key_f10, MDFR_NONE, project_fkey_command);
bind(context, key_f11, MDFR_NONE, project_fkey_command);
bind(context, key_f12, MDFR_NONE, project_fkey_command);
bind(context, key_f13, MDFR_NONE, project_fkey_command);
bind(context, key_f14, MDFR_NONE, project_fkey_command);
bind(context, key_f15, MDFR_NONE, project_fkey_command);
bind(context, key_f16, MDFR_NONE, project_fkey_command);
end_map(context);
begin_map(context, mapid_file);
bind_vanilla_keys(context, write_character);
bind(context, key_mouse_left, MDFR_NONE, click_set_cursor);
bind(context, key_mouse_left_release, MDFR_NONE, click_set_mark);
bind(context, key_mouse_right, MDFR_NONE, click_set_mark);
bind(context, key_left, MDFR_NONE, move_left);
bind(context, key_right, MDFR_NONE, move_right);
bind(context, key_del, MDFR_NONE, delete_char);
bind(context, key_del, MDFR_SHIFT, delete_char);
bind(context, key_back, MDFR_NONE, backspace_char);
bind(context, key_back, MDFR_SHIFT, backspace_char);
bind(context, key_up, MDFR_NONE, move_up);
bind(context, key_down, MDFR_NONE, move_down);
bind(context, key_end, MDFR_NONE, seek_end_of_line);
bind(context, key_home, MDFR_NONE, seek_beginning_of_line);
bind(context, key_page_up, MDFR_CTRL, goto_beginning_of_file);
bind(context, key_page_down, MDFR_CTRL, goto_end_of_file);
bind(context, key_page_up, MDFR_NONE, page_up);
bind(context, key_page_down, MDFR_NONE, page_down);
bind(context, key_right, MDFR_CTRL, seek_whitespace_right);
bind(context, key_left, MDFR_CTRL, seek_whitespace_left);
bind(context, key_up, MDFR_CTRL, seek_whitespace_up_end_line);
bind(context, key_down, MDFR_CTRL, seek_whitespace_down_end_line);
bind(context, key_up, MDFR_ALT, move_line_up);
bind(context, key_down, MDFR_ALT, move_line_down);
bind(context, key_back, MDFR_CTRL, backspace_word);
bind(context, key_del, MDFR_CTRL, delete_word);
bind(context, key_back, MDFR_ALT, snipe_token_or_word);
bind(context, key_del, MDFR_ALT, snipe_token_or_word_right);
bind(context, ' ', MDFR_CTRL, set_mark);
bind(context, 'a', MDFR_CTRL, replace_in_range);
bind(context, 'c', MDFR_CTRL, copy);
bind(context, 'd', MDFR_CTRL, delete_range);
bind(context, 'D', MDFR_CTRL, delete_line);
bind(context, 'e', MDFR_CTRL, center_view);
bind(context, 'E', MDFR_CTRL, left_adjust_view);
bind(context, 'f', MDFR_CTRL, search);
bind(context, 'F', MDFR_CTRL, list_all_locations);
bind(context, 'F', MDFR_ALT, list_all_substring_locations_case_insensitive);
bind(context, 'g', MDFR_CTRL, goto_line);
bind(context, 'G', MDFR_CTRL, list_all_locations_of_selection);
bind(context, 'K', MDFR_CTRL, kill_buffer);
bind(context, 'l', MDFR_CTRL, toggle_line_wrap);
bind(context, 'L', MDFR_CTRL, duplicate_line);
bind(context, 'm', MDFR_CTRL, cursor_mark_swap);
bind(context, 'O', MDFR_CTRL, reopen);
bind(context, 'q', MDFR_CTRL, query_replace);
bind(context, 'Q', MDFR_CTRL, query_replace_identifier);
bind(context, 'q', MDFR_ALT, query_replace_selection);
bind(context, 'r', MDFR_CTRL, reverse_search);
bind(context, 's', MDFR_CTRL, save);
bind(context, 's', MDFR_ALT, save_to_query);
bind(context, 't', MDFR_CTRL, search_identifier);
bind(context, 'T', MDFR_CTRL, list_all_locations_of_identifier);
bind(context, 'v', MDFR_CTRL, paste_and_indent);
bind(context, 'v', MDFR_ALT, toggle_virtual_whitespace);
bind(context, 'V', MDFR_CTRL, paste_next_and_indent);
bind(context, 'x', MDFR_CTRL, cut);
bind(context, 'y', MDFR_CTRL, redo);
bind(context, 'z', MDFR_CTRL, undo);
bind(context, '1', MDFR_CTRL, view_buffer_other_panel);
bind(context, '2', MDFR_CTRL, swap_buffers_between_panels);
bind(context, '?', MDFR_CTRL, toggle_show_whitespace);
bind(context, '~', MDFR_CTRL, clean_all_lines);
bind(context, '\n', MDFR_NONE, newline_or_goto_position_sticky);
bind(context, '\n', MDFR_SHIFT, newline_or_goto_position_same_panel_sticky);
bind(context, ' ', MDFR_SHIFT, write_character);
end_map(context);
begin_map(context, default_code_map);
inherit_map(context, mapid_file);
bind(context, key_right, MDFR_CTRL, seek_alphanumeric_or_camel_right);
bind(context, key_left, MDFR_CTRL, seek_alphanumeric_or_camel_left);
bind(context, '\n', MDFR_NONE, write_and_auto_tab);
bind(context, '\n', MDFR_SHIFT, write_and_auto_tab);
bind(context, '}', MDFR_NONE, write_and_auto_tab);
bind(context, ')', MDFR_NONE, write_and_auto_tab);
bind(context, ']', MDFR_NONE, write_and_auto_tab);
bind(context, ';', MDFR_NONE, write_and_auto_tab);
bind(context, '#', MDFR_NONE, write_and_auto_tab);
bind(context, '\t', MDFR_NONE, word_complete);
bind(context, '\t', MDFR_CTRL, auto_tab_range);
bind(context, '\t', MDFR_SHIFT, auto_tab_line_at_cursor);
bind(context, 'h', MDFR_ALT, write_hack);
bind(context, 'r', MDFR_ALT, write_block);
bind(context, 't', MDFR_ALT, write_todo);
bind(context, 'y', MDFR_ALT, write_note);
bind(context, 'D', MDFR_ALT, list_all_locations_of_type_definition);
bind(context, 'T', MDFR_ALT, list_all_locations_of_type_definition_of_identifier);
bind(context, '[', MDFR_CTRL, open_long_braces);
bind(context, '{', MDFR_CTRL, open_long_braces_semicolon);
bind(context, '}', MDFR_CTRL, open_long_braces_break);
bind(context, '[', MDFR_ALT, highlight_surrounding_scope);
bind(context, ']', MDFR_ALT, highlight_prev_scope_absolute);
bind(context, '\'', MDFR_ALT, highlight_next_scope_absolute);
bind(context, '/', MDFR_ALT, place_in_scope);
bind(context, '-', MDFR_ALT, delete_current_scope);
bind(context, 'j', MDFR_ALT, scope_absorb_down);
bind(context, 'i', MDFR_ALT, if0_off);
bind(context, '1', MDFR_ALT, open_file_in_quotes);
bind(context, '2', MDFR_ALT, open_matching_file_cpp);
bind(context, '0', MDFR_CTRL, write_zero_struct);
bind(context, 'I', MDFR_CTRL, list_all_functions_current_buffer);
end_map(context);
}


#if !defined(NO_BINDING)
extern "C" int32_t
get_bindings(void *data, int32_t size){
    Bind_Helper context_ = begin_bind_helper(data, size);
    Bind_Helper *context = &context_;
    
    set_all_default_hooks(context);
#if defined(__APPLE__) && defined(__MACH__)
    mac_default_keys(context);
#else
    // default_keys(context);
    delta_custom(context);
#endif
    
    int32_t result = end_bind_helper(context);
    return(result);
}
#endif //NO_BINDING

#endif //FCODER_DEFAULT_BINDINGS

// BOTTOM


/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "common.h"

wchar_t* gUString = (wchar_t*)0x5E9F08; //[640]

bool& play_replay = *(bool*)0x5EADAA;
bool& constant_replay_save = *(bool*)0x5EADA3;
bool& skip_dummies = *(bool*)0x5EAD69;
bool& do_test = *(bool*)0x5EAD80;
bool& skip_mission = *(bool*)0x5EADAE;
bool& show_cycle = *(bool*)0x5EADA7;
bool& do_brian_test = *(bool*)0x5EAD7D;
bool& do_iain_test = *(bool*)0x5EAD8D;
bool& skip_tiles = *(bool*)0x5EAD90;
bool& do_show_counters = *(bool*)0x5EAD95;
bool& do_show_camera = *(bool*)0x5EAD82;
bool& do_show_input = *(bool*)0x5EAD58;
bool& do_show_timing = *(bool*)0x5EAD79;
bool& do_show_collision_box = *(bool*)0x5EADB1;
bool& do_show_physics = *(bool*)0x5EAD85;
bool& do_show_imaginary = *(bool*)0x5EAD6F;
bool& skip_user = *(bool*)0x5EAD64;
bool& skip_traffic_lights = *(bool*)0x5EAD53;
bool& skip_recycling = *(bool*)0x5EAD5B;
bool& log_collisions = *(bool*)0x5EADB0;
bool& do_show_traffic_lights_info = *(bool*)0x5EAD96;
bool& do_show_ids = *(bool*)0x5EADA1;
bool& limit_recycling = *(bool*)0x5EADAC;
bool& no_annoying_chars = *(bool*)0x5EAD75;
bool& skip_slopes = *(bool*)0x5EAD78;
bool& skip_left = *(bool*)0x5EAD67;
bool& skip_right = *(bool*)0x5EAD59;
bool& skip_top = *(bool*)0x5EAD8C;
bool& skip_bottom = *(bool*)0x5EAD5F;
bool& skip_lid = *(bool*)0x5EAD9C;
bool& log_routefinder = *(bool*)0x5EAD99;
bool& do_mike = *(bool*)0x5EAD81;
bool& skip_particles = *(bool*)0x5EAD56;
bool& show_hidden_faces = *(bool*)0x5EAD5A;
bool& get_all_weapons = *(bool*)0x5EAD74;
bool& do_exit_after_replay = *(bool*)0x5EADAD;
bool& dont_get_car_back = *(bool*)0x5EAD94;
bool& do_show_instruments = *(bool*)0x5EAD55;
bool& skip_ambulance = *(bool*)0x5EAD6B;
bool& skip_police = *(bool*)0x5EAD5E;
bool& skip_frontend = *(bool*)0x5EAD7C;
bool& do_invulnerable = *(bool*)0x5EAD71;
bool& show_all_arrows = *(bool*)0x5EADB2;
bool& do_show_horn = *(bool*)0x5EAD7F;
bool& keep_weapons_after_death = *(bool*)0x5EAD9E;
bool& skip_skidmarks = *(bool*)0x5EADAF;
bool& do_show_junc_ids = *(bool*)0x5EAD89;
bool& do_corner_window = *(bool*)0x5EAD68;
bool& do_infinite_lives = *(bool*)0x5EAD61;
bool& do_load_savegame = *(bool*)0x5EAD7E;
bool& skip_audio = *(bool*)0x5EAD72;
bool& do_debug_keys = *(bool*)0x5EAD87;
bool& log_random = *(bool*)0x5EAD63;
bool& log_random_extra = *(bool*)0x5EAD7A;
bool& log_input = *(bool*)0x5EAD91;
bool& log_directinput = *(bool*)0x5EAD77;
bool& ignore_replay_header = *(bool*)0x5EAD86;
bool& skip_trains = *(bool*)0x5EAD57;
bool& skip_buses = *(bool*)0x5EAD54;
bool& skip_quit_confirm = *(bool*)0x5EADAB;
bool& do_sync_check = *(bool*)0x5EADA8;
bool& skip_fire_engines = *(bool*)0x5EAD8B;
bool& show_brief_number = *(bool*)0x5EADA5;
bool& skip_window_check = *(bool*)0x5EAD6C;
bool& skip_replay_sync_check = *(bool*)0x5EADA4;
bool& do_show_object_ids = *(bool*)0x5EAD52;
bool& do_kill_phones_on_answer = *(bool*)0x5EADB3;
bool& do_miss_logging = *(bool*)0x5EAD66;
bool& do_text_id_test = *(bool*)0x5EAD9A;
bool& do_police_1 = *(bool*)0x5EAD60;
bool& do_police_2 = *(bool*)0x5EAD9D;
bool& do_police_3 = *(bool*)0x5EADA9;
bool& skip_draw = *(bool*)0x5EAD88;
bool& do_free_shopping = *(bool*)0x5EAD84;
bool& do_release_replay = *(bool*)0x5EAD92;
bool& do_blood = *(bool*)0x5EAD51;
bool& do_3d_sound = *(bool*)0x5EAD50;
bool& french_game = *(bool*)0x5EAD73;
bool& show_player_names = *(bool*)0x5EAD76;

bool& network_game = *(bool*)0x673E2C;


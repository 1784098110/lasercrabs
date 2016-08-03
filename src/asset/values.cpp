#include "lookup.h"

namespace VI
{ 


const char* AssetLookup::Mesh::values[] =
{
	"assets/awk.msh",
	"assets/character.msh",
	"assets/compass.msh",
	"assets/cone.msh",
	"assets/containment_field_base.msh",
	"assets/containment_field_sphere.msh",
	"assets/cube.msh",
	"assets/cursor.msh",
	"assets/data_fragment.msh",
	"assets/icon_battery_0.msh",
	"assets/icon_battery_1.msh",
	"assets/icon_battery_2.msh",
	"assets/icon_battery_3.msh",
	"assets/icon_containment_field.msh",
	"assets/icon_credits.msh",
	"assets/icon_gamepad.msh",
	"assets/icon_minion.msh",
	"assets/icon_network_error.msh",
	"assets/icon_rocket.msh",
	"assets/icon_select.msh",
	"assets/icon_sensor.msh",
	"assets/logo_mesh.msh",
	"assets/logo_mesh_1.msh",
	"assets/plane.msh",
	"assets/reticle_dash.msh",
	"assets/rocket_base.msh",
	"assets/rocket_pod.msh",
	"assets/rope_base.msh",
	"assets/sky_decal.msh",
	"assets/sky_pattern.msh",
	"assets/skybox.msh",
	"assets/spawn.msh",
	"assets/sphere.msh",
	"assets/target.msh",
	"assets/terminal.msh",
	"assets/tri_tube.msh",
	"assets/lvl/Ioke_Cube.msh",
	"assets/lvl/Ioke_Cube_001.msh",
	"assets/lvl/Ioke_Cube_002.msh",
	"assets/lvl/Ioke_Cube_004.msh",
	"assets/lvl/Ioke_Cube_005.msh",
	"assets/lvl/Ioke_Cube_006.msh",
	"assets/lvl/Ioke_Cube_007.msh",
	"assets/lvl/Ioke_bsp_model_0_000.msh",
	"assets/lvl/Ioke_bsp_model_0_001.msh",
	"assets/lvl/Ioke_bsp_model_0_002.msh",
	"assets/lvl/Ioke_bsp_model_0_002_1.msh",
	"assets/lvl/Ioke_bsp_model_0_003.msh",
	"assets/lvl/Ioke_bsp_model_0_003_1.msh",
	"assets/lvl/Ioke_bsp_model_0_004.msh",
	"assets/lvl/Ioke_bsp_model_0_004_1.msh",
	"assets/lvl/Ioke_bsp_model_0_005.msh",
	"assets/lvl/Ioke_bsp_model_0_005_1.msh",
	"assets/lvl/Ioke_bsp_model_0_006.msh",
	"assets/lvl/Ioke_bsp_model_0_006_1.msh",
	"assets/lvl/Ioke_bsp_model_0_007.msh",
	"assets/lvl/Ioke_bsp_model_0_007_1.msh",
	"assets/lvl/Ioke_bsp_model_0_008.msh",
	"assets/lvl/Ioke_bsp_model_0_009.msh",
	"assets/lvl/Ioke_bsp_model_0_010.msh",
	"assets/lvl/Ioke_bsp_model_0_011.msh",
	"assets/lvl/Ioke_bsp_model_0_012.msh",
	"assets/lvl/Ioke_bsp_model_0_013.msh",
	"assets/lvl/Ioke_bsp_model_0_014.msh",
	"assets/lvl/Ioke_bsp_model_0_015.msh",
	"assets/lvl/Ioke_bsp_model_0_016.msh",
	"assets/lvl/Ioke_bsp_model_0_017.msh",
	"assets/lvl/Ioke_bsp_model_0_018.msh",
	"assets/lvl/Ioke_bsp_model_0_019.msh",
	"assets/lvl/Medias_Res_Cube.msh",
	"assets/lvl/Medias_Res_Cube_001.msh",
	"assets/lvl/Medias_Res_Cube_003.msh",
	"assets/lvl/Medias_Res_Cube_004.msh",
	"assets/lvl/Medias_Res_Cube_005.msh",
	"assets/lvl/Medias_Res_Cube_1.msh",
	"assets/lvl/Moros_Cube.msh",
	"assets/lvl/Moros_Cube_1.msh",
	"assets/lvl/Moros_water.msh",
	"assets/lvl/Ponos_Cube.msh",
	"assets/lvl/Ponos_Cube_001.msh",
	"assets/lvl/Ponos_Cube_002.msh",
	"assets/lvl/Ponos_Cube_003.msh",
	"assets/lvl/Ponos_Cube_004.msh",
	"assets/lvl/Ponos_Cube_005.msh",
	"assets/lvl/Ponos_Cube_006.msh",
	"assets/lvl/Ponos_Cube_007.msh",
	"assets/lvl/Ponos_Cube_008.msh",
	"assets/lvl/Ponos_Cube_009.msh",
	"assets/lvl/Ponos_Cube_010.msh",
	"assets/lvl/Ponos_Cube_010_1.msh",
	"assets/lvl/Ponos_Cube_011.msh",
	"assets/lvl/Ponos_Cube_011_1.msh",
	"assets/lvl/Ponos_Cube_1.msh",
	"assets/lvl/Ponos_bsp_model_0_000.msh",
	"assets/lvl/Soteria_Cube_000.msh",
	"assets/lvl/Soteria_Cube_001.msh",
	"assets/lvl/Soteria_Cube_001_1.msh",
	"assets/lvl/Soteria_Cube_002.msh",
	"assets/lvl/Soteria_Cube_003.msh",
	"assets/lvl/Soteria_Cube_003_1.msh",
	"assets/lvl/Soteria_Cube_004.msh",
	"assets/lvl/Soteria_Cube_004_1.msh",
	"assets/lvl/Soteria_Cube_005.msh",
	"assets/lvl/Soteria_Cube_005_1.msh",
	"assets/lvl/Soteria_Cube_006.msh",
	"assets/lvl/Soteria_Cube_007.msh",
	"assets/lvl/Soteria_bsp_model_0_000.msh",
	"assets/lvl/Soteria_door.msh",
	"assets/lvl/Soteria_transparent_wall.msh",
	"assets/lvl/Tyche_Cube.msh",
	"assets/lvl/Tyche_Cube_001.msh",
	"assets/lvl/Tyche_Cube_001_1.msh",
	"assets/lvl/Tyche_Cube_003.msh",
	"assets/lvl/Tyche_Cube_004.msh",
	"assets/lvl/Tyche_Cube_004_1.msh",
	"assets/lvl/Tyche_Cube_005.msh",
	"assets/lvl/Tyche_Cube_005_1.msh",
	"assets/lvl/Tyche_Cube_006.msh",
	"assets/lvl/Tyche_Cube_007.msh",
	"assets/lvl/Tyche_Cube_008.msh",
	"assets/lvl/Tyche_Cube_1.msh",
	"assets/lvl/terminal_Cube.msh",
	"assets/lvl/title_Cube.msh",
	"assets/lvl/title_Cube_1.msh",
	"assets/lvl/title_water.msh",
	0,
};


const char* AssetLookup::Mesh::names[] =
{
	"awk",
	"character",
	"compass",
	"cone",
	"containment_field_base",
	"containment_field_sphere",
	"cube",
	"cursor",
	"data_fragment",
	"icon_battery_0",
	"icon_battery_1",
	"icon_battery_2",
	"icon_battery_3",
	"icon_containment_field",
	"icon_credits",
	"icon_gamepad",
	"icon_minion",
	"icon_network_error",
	"icon_rocket",
	"icon_select",
	"icon_sensor",
	"logo_mesh",
	"logo_mesh_1",
	"plane",
	"reticle_dash",
	"rocket_base",
	"rocket_pod",
	"rope_base",
	"sky_decal",
	"sky_pattern",
	"skybox",
	"spawn",
	"sphere",
	"target",
	"terminal",
	"tri_tube",
	"Ioke_Cube",
	"Ioke_Cube_001",
	"Ioke_Cube_002",
	"Ioke_Cube_004",
	"Ioke_Cube_005",
	"Ioke_Cube_006",
	"Ioke_Cube_007",
	"Ioke_bsp_model_0_000",
	"Ioke_bsp_model_0_001",
	"Ioke_bsp_model_0_002",
	"Ioke_bsp_model_0_002_1",
	"Ioke_bsp_model_0_003",
	"Ioke_bsp_model_0_003_1",
	"Ioke_bsp_model_0_004",
	"Ioke_bsp_model_0_004_1",
	"Ioke_bsp_model_0_005",
	"Ioke_bsp_model_0_005_1",
	"Ioke_bsp_model_0_006",
	"Ioke_bsp_model_0_006_1",
	"Ioke_bsp_model_0_007",
	"Ioke_bsp_model_0_007_1",
	"Ioke_bsp_model_0_008",
	"Ioke_bsp_model_0_009",
	"Ioke_bsp_model_0_010",
	"Ioke_bsp_model_0_011",
	"Ioke_bsp_model_0_012",
	"Ioke_bsp_model_0_013",
	"Ioke_bsp_model_0_014",
	"Ioke_bsp_model_0_015",
	"Ioke_bsp_model_0_016",
	"Ioke_bsp_model_0_017",
	"Ioke_bsp_model_0_018",
	"Ioke_bsp_model_0_019",
	"Medias_Res_Cube",
	"Medias_Res_Cube_001",
	"Medias_Res_Cube_003",
	"Medias_Res_Cube_004",
	"Medias_Res_Cube_005",
	"Medias_Res_Cube_1",
	"Moros_Cube",
	"Moros_Cube_1",
	"Moros_water",
	"Ponos_Cube",
	"Ponos_Cube_001",
	"Ponos_Cube_002",
	"Ponos_Cube_003",
	"Ponos_Cube_004",
	"Ponos_Cube_005",
	"Ponos_Cube_006",
	"Ponos_Cube_007",
	"Ponos_Cube_008",
	"Ponos_Cube_009",
	"Ponos_Cube_010",
	"Ponos_Cube_010_1",
	"Ponos_Cube_011",
	"Ponos_Cube_011_1",
	"Ponos_Cube_1",
	"Ponos_bsp_model_0_000",
	"Soteria_Cube_000",
	"Soteria_Cube_001",
	"Soteria_Cube_001_1",
	"Soteria_Cube_002",
	"Soteria_Cube_003",
	"Soteria_Cube_003_1",
	"Soteria_Cube_004",
	"Soteria_Cube_004_1",
	"Soteria_Cube_005",
	"Soteria_Cube_005_1",
	"Soteria_Cube_006",
	"Soteria_Cube_007",
	"Soteria_bsp_model_0_000",
	"Soteria_door",
	"Soteria_transparent_wall",
	"Tyche_Cube",
	"Tyche_Cube_001",
	"Tyche_Cube_001_1",
	"Tyche_Cube_003",
	"Tyche_Cube_004",
	"Tyche_Cube_004_1",
	"Tyche_Cube_005",
	"Tyche_Cube_005_1",
	"Tyche_Cube_006",
	"Tyche_Cube_007",
	"Tyche_Cube_008",
	"Tyche_Cube_1",
	"terminal_Cube",
	"title_Cube",
	"title_Cube_1",
	"title_water",
	0,
};


const char* AssetLookup::Animation::values[] =
{
	"assets/awk_dash.anm",
	"assets/awk_fly.anm",
	"assets/character_fall.anm",
	"assets/character_idle.anm",
	"assets/character_jump1.anm",
	"assets/character_land.anm",
	"assets/character_land_hard.anm",
	"assets/character_mantle.anm",
	"assets/character_roll.anm",
	"assets/character_run.anm",
	"assets/character_slide.anm",
	"assets/character_walk.anm",
	"assets/character_wall_run_left.anm",
	"assets/character_wall_run_right.anm",
	0,
};


const char* AssetLookup::Animation::names[] =
{
	"awk_dash",
	"awk_fly",
	"character_fall",
	"character_idle",
	"character_jump1",
	"character_land",
	"character_land_hard",
	"character_mantle",
	"character_roll",
	"character_run",
	"character_slide",
	"character_walk",
	"character_wall_run_left",
	"character_wall_run_right",
	0,
};


const char* AssetLookup::Armature::values[] =
{
	"assets/awk.arm",
	"assets/character.arm",
	0,
};


const char* AssetLookup::Armature::names[] =
{
	"awk",
	"character",
	0,
};


const char* AssetLookup::Texture::values[] =
{
	"assets/flare.png",
	"assets/gradient.png",
	"assets/noise.png",
	"assets/pattern.png",
	"assets/penelope.png",
	"assets/skybox_horizon.png",
	"assets/water_normal.png",
	0,
};


const char* AssetLookup::Texture::names[] =
{
	"flare",
	"gradient",
	"noise",
	"pattern",
	"penelope",
	"skybox_horizon",
	"water_normal",
	0,
};


const char* AssetLookup::Soundbank::values[] =
{
	"assets/Init.bnk",
	"assets/SOUNDBANK.bnk",
	0,
};


const char* AssetLookup::Soundbank::names[] =
{
	"Init",
	"SOUNDBANK",
	0,
};


const char* AssetLookup::Shader::values[] =
{
	"assets/shader/armature.glsl",
	"assets/shader/bloom_downsample.glsl",
	"assets/shader/blur.glsl",
	"assets/shader/composite.glsl",
	"assets/shader/culled.glsl",
	"assets/shader/debug_depth.glsl",
	"assets/shader/edge_detect.glsl",
	"assets/shader/flat.glsl",
	"assets/shader/flat_texture.glsl",
	"assets/shader/global_light.glsl",
	"assets/shader/particle_eased.glsl",
	"assets/shader/particle_spark.glsl",
	"assets/shader/particle_standard.glsl",
	"assets/shader/particle_textured.glsl",
	"assets/shader/point_light.glsl",
	"assets/shader/scan_lines.glsl",
	"assets/shader/sky_decal.glsl",
	"assets/shader/skybox.glsl",
	"assets/shader/spot_light.glsl",
	"assets/shader/ssao.glsl",
	"assets/shader/ssao_blur.glsl",
	"assets/shader/ssao_downsample.glsl",
	"assets/shader/standard.glsl",
	"assets/shader/standard_instanced.glsl",
	"assets/shader/ui.glsl",
	"assets/shader/ui_texture.glsl",
	"assets/shader/water.glsl",
	0,
};


const char* AssetLookup::Shader::names[] =
{
	"armature",
	"bloom_downsample",
	"blur",
	"composite",
	"culled",
	"debug_depth",
	"edge_detect",
	"flat",
	"flat_texture",
	"global_light",
	"particle_eased",
	"particle_spark",
	"particle_standard",
	"particle_textured",
	"point_light",
	"scan_lines",
	"sky_decal",
	"skybox",
	"spot_light",
	"ssao",
	"ssao_blur",
	"ssao_downsample",
	"standard",
	"standard_instanced",
	"ui",
	"ui_texture",
	"water",
	0,
};


const char* AssetLookup::Uniform::names[] =
{
	"ambient_color",
	"bones",
	"buffer_size",
	"color_buffer",
	"cull_behind_wall",
	"cull_center",
	"cull_radius",
	"depth_buffer",
	"detail_light_vp",
	"detail_shadow_map",
	"diffuse_color",
	"diffuse_map",
	"far_plane",
	"fog",
	"fog_extent",
	"fog_start",
	"frustum",
	"gravity",
	"inv_buffer_size",
	"inv_uv_scale",
	"lifetime",
	"light_color",
	"light_direction",
	"light_fov_dot",
	"light_pos",
	"light_radius",
	"light_vp",
	"lighting_buffer",
	"mv",
	"mvp",
	"noise_sampler",
	"normal_buffer",
	"normal_map",
	"p",
	"player_light",
	"range",
	"range_center",
	"shadow_map",
	"size",
	"ssao_buffer",
	"time",
	"type",
	"uv_offset",
	"uv_scale",
	"v",
	"viewport_scale",
	"vp",
	"wall_normal",
	0,
};


const char* AssetLookup::Font::values[] =
{
	"assets/lowpoly.fnt",
	"assets/pt_sans.fnt",
	0,
};


const char* AssetLookup::Font::names[] =
{
	"lowpoly",
	"pt_sans",
	0,
};


const char* AssetLookup::Level::values[] =
{
	"assets/lvl/Ioke.lvl",
	"assets/lvl/Medias_Res.lvl",
	"assets/lvl/Moros.lvl",
	"assets/lvl/Ponos.lvl",
	"assets/lvl/Soteria.lvl",
	"assets/lvl/Tyche.lvl",
	"assets/lvl/intro.lvl",
	"assets/lvl/splitscreen.lvl",
	"assets/lvl/terminal.lvl",
	"assets/lvl/title.lvl",
	0,
};


const char* AssetLookup::Level::names[] =
{
	"Ioke",
	"Medias Res",
	"Moros",
	"Ponos",
	"Soteria",
	"Tyche",
	"intro",
	"splitscreen",
	"terminal",
	"title",
	0,
};


const char* AssetLookup::NavMesh::values[] =
{
	"assets/lvl/Ioke.nav",
	"assets/lvl/Medias_Res.nav",
	"assets/lvl/Moros.nav",
	"assets/lvl/Ponos.nav",
	"assets/lvl/Soteria.nav",
	"assets/lvl/Tyche.nav",
	"assets/lvl/intro.nav",
	"assets/lvl/splitscreen.nav",
	"assets/lvl/terminal.nav",
	"assets/lvl/title.nav",
	0,
};


const char* AssetLookup::NavMesh::names[] =
{
	"Ioke",
	"Medias Res",
	"Moros",
	"Ponos",
	"Soteria",
	"Tyche",
	"intro",
	"splitscreen",
	"terminal",
	"title",
	0,
};


const char* AssetLookup::String::names[] =
{
	"Ioke",
	"Medias Res",
	"Moros",
	"Ponos",
	"Soteria",
	"Tyche",
	"_default",
	"ability_spawn_cost",
	"accept",
	"back",
	"binding",
	"btn_A",
	"btn_B",
	"btn_LeftClick",
	"btn_LeftShoulder",
	"btn_LeftTrigger",
	"btn_None",
	"btn_RightClick",
	"btn_RightShoulder",
	"btn_RightTrigger",
	"btn_Start",
	"btn_X",
	"btn_Y",
	"buy_period",
	"buy_period_expired",
	"close",
	"connecting",
	"consolation",
	"consolation1",
	"consolation2",
	"consolation3",
	"consolation_done",
	"consolation_index",
	"containment_field",
	"containment_field_destroyed",
	"danger",
	"data_fragment",
	"data_fragment_prompt",
	"defeat",
	"deploy_prompt",
	"deploy_timer",
	"description_containment_field",
	"description_health_buff",
	"description_health_steal",
	"description_minion",
	"description_rocket",
	"description_sensor",
	"draw",
	"dummy",
	"enemy_detected",
	"enemy_tracking",
	"exit",
	"forfeit_network_error",
	"forfeit_opponent_quit",
	"health_buff",
	"health_steal",
	"hp_added",
	"intro",
	"intro_done",
	"intro_start",
	"invincible",
	"key_A",
	"key_ACBack",
	"key_ACBookmarks",
	"key_ACForward",
	"key_ACHome",
	"key_ACRefresh",
	"key_ACSearch",
	"key_ACStop",
	"key_Again",
	"key_AltErase",
	"key_Apostrophe",
	"key_Application",
	"key_AudioMute",
	"key_AudioNext",
	"key_AudioPlay",
	"key_AudioPrev",
	"key_AudioStop",
	"key_B",
	"key_Backslash",
	"key_Backspace",
	"key_BrightnessDown",
	"key_BrightnessUp",
	"key_C",
	"key_Calculator",
	"key_Cancel",
	"key_Capslock",
	"key_Clear",
	"key_ClearAgain",
	"key_Comma",
	"key_Computer",
	"key_Copy",
	"key_CrSel",
	"key_CurrencySubunit",
	"key_CurrencyUnit",
	"key_Cut",
	"key_D",
	"key_D0",
	"key_D1",
	"key_D2",
	"key_D3",
	"key_D4",
	"key_D5",
	"key_D6",
	"key_D7",
	"key_D8",
	"key_D9",
	"key_DecimalSeparator",
	"key_Delete",
	"key_DisplaySwitch",
	"key_Down",
	"key_E",
	"key_Eject",
	"key_End",
	"key_Equals",
	"key_Escape",
	"key_ExSel",
	"key_Execute",
	"key_F",
	"key_F1",
	"key_F10",
	"key_F11",
	"key_F12",
	"key_F13",
	"key_F14",
	"key_F15",
	"key_F16",
	"key_F17",
	"key_F18",
	"key_F19",
	"key_F2",
	"key_F20",
	"key_F21",
	"key_F22",
	"key_F23",
	"key_F24",
	"key_F3",
	"key_F4",
	"key_F5",
	"key_F6",
	"key_F7",
	"key_F8",
	"key_F9",
	"key_Find",
	"key_G",
	"key_Grave",
	"key_H",
	"key_Help",
	"key_Home",
	"key_I",
	"key_Insert",
	"key_J",
	"key_K",
	"key_KbDillumDown",
	"key_KbDillumToggle",
	"key_KbDillumUp",
	"key_Keypad0",
	"key_Keypad00",
	"key_Keypad000",
	"key_Keypad1",
	"key_Keypad2",
	"key_Keypad3",
	"key_Keypad4",
	"key_Keypad5",
	"key_Keypad6",
	"key_Keypad7",
	"key_Keypad8",
	"key_Keypad9",
	"key_KeypadA",
	"key_KeypadAmpersand",
	"key_KeypadAt",
	"key_KeypadB",
	"key_KeypadBackspace",
	"key_KeypadBinary",
	"key_KeypadC",
	"key_KeypadClear",
	"key_KeypadClearEntry",
	"key_KeypadColon",
	"key_KeypadComma",
	"key_KeypadD",
	"key_KeypadDblAmpersand",
	"key_KeypadDblVerticalBar",
	"key_KeypadDecimal",
	"key_KeypadDivide",
	"key_KeypadE",
	"key_KeypadEnter",
	"key_KeypadEquals",
	"key_KeypadEqualsAS400",
	"key_KeypadExclam",
	"key_KeypadF",
	"key_KeypadGreater",
	"key_KeypadHash",
	"key_KeypadHexadecimal",
	"key_KeypadLeftBrace",
	"key_KeypadLeftParen",
	"key_KeypadLess",
	"key_KeypadMemAdd",
	"key_KeypadMemClear",
	"key_KeypadMemDivide",
	"key_KeypadMemMultiply",
	"key_KeypadMemRecall",
	"key_KeypadMemStore",
	"key_KeypadMemSubtract",
	"key_KeypadMinus",
	"key_KeypadMultiply",
	"key_KeypadOctal",
	"key_KeypadPercent",
	"key_KeypadPeriod",
	"key_KeypadPlus",
	"key_KeypadPlusMinus",
	"key_KeypadPower",
	"key_KeypadRightBrace",
	"key_KeypadRightParen",
	"key_KeypadSpace",
	"key_KeypadTab",
	"key_KeypadVerticalBar",
	"key_KeypadXor",
	"key_L",
	"key_LAlt",
	"key_LCtrl",
	"key_LGui",
	"key_LShift",
	"key_Left",
	"key_LeftBracket",
	"key_M",
	"key_Mail",
	"key_MediaSelect",
	"key_Menu",
	"key_Minus",
	"key_Mode",
	"key_MouseLeft",
	"key_MouseMiddle",
	"key_MouseRight",
	"key_Mute",
	"key_N",
	"key_None",
	"key_NumlockClear",
	"key_O",
	"key_Oper",
	"key_Out",
	"key_P",
	"key_PageDown",
	"key_PageUp",
	"key_Paste",
	"key_Pause",
	"key_Period",
	"key_Power",
	"key_Printscreen",
	"key_Prior",
	"key_Q",
	"key_R",
	"key_RAlt",
	"key_RCtrl",
	"key_RGui",
	"key_RShift",
	"key_Return",
	"key_Return2",
	"key_Right",
	"key_RightBracket",
	"key_S",
	"key_Scrolllock",
	"key_Select",
	"key_Semicolon",
	"key_Separator",
	"key_Slash",
	"key_Sleep",
	"key_Space",
	"key_Stop",
	"key_SysReq",
	"key_T",
	"key_Tab",
	"key_ThousandsSeparator",
	"key_U",
	"key_Undo",
	"key_Up",
	"key_V",
	"key_VolumeDown",
	"key_VolumeUp",
	"key_W",
	"key_Www",
	"key_X",
	"key_Y",
	"key_Z",
	"keyboard_movement",
	"leaderboard_hide",
	"leaderboard_show",
	"left_joystick",
	"leftover_energy",
	"loading_offline",
	"main_menu",
	"map_simulation",
	"match_found",
	"match_go",
	"match_searching",
	"match_starting",
	"matchmaking",
	"matchmaking_start",
	"minion",
	"minion_killed",
	"music",
	"no",
	"no_effect",
	"options",
	"penelope_hide",
	"play",
	"player",
	"right_joystick",
	"rocket",
	"rocket_incoming",
	"round",
	"second_round",
	"second_round_go",
	"sensor",
	"sensor_destroyed",
	"sfx",
	"skip_tutorial",
	"spawn_timer",
	"splitscreen",
	"splitscreen_prompt",
	"splitscreen_prompt_ready",
	"stealth",
	"stunned",
	"target_damaged",
	"target_shield_down",
	"target_stunned",
	"team_a",
	"team_b",
	"teleport",
	"terminal_reset",
	"timer",
	"tip_0",
	"tip_1",
	"tip_2",
	"tip_3",
	"tip_4",
	"tip_5",
	"tip_6",
	"tip_7",
	"tip_8",
	"tip_9",
	"total_rating_gain",
	"tried",
	"tut_parkour_climb",
	"tut_parkour_double_jump",
	"tut_parkour_movement",
	"tut_parkour_roll",
	"tut_parkour_slide",
	"tut_parkour_wallrun",
	"tut_pvp_health",
	"tut_pvp_kill_player",
	"tut_pvp_minion",
	"tut_pvp_upgrade",
	"tutorial_done",
	"tutorial_intro",
	"tutorial_intro_done",
	"upgrade_description",
	"upgrade_notification",
	"upgrade_prompt",
	"upgrading",
	"victory",
	"waiting",
	"yes",
	0,
};


const char* AssetLookup::DialogueTree::values[] =
{
	"assets/dl/Ioke.dlz",
	"assets/dl/Medias_Res.dlz",
	"assets/dl/Moros.dlz",
	"assets/dl/Ponos.dlz",
	"assets/dl/Soteria.dlz",
	"assets/dl/Tyche.dlz",
	"assets/dl/common.dlz",
	"assets/dl/intro.dlz",
	0,
};


const char* AssetLookup::DialogueTree::names[] =
{
	"Ioke",
	"Medias Res",
	"Moros",
	"Ponos",
	"Soteria",
	"Tyche",
	"common",
	"intro",
	0,
};


}
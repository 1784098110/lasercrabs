#pragma once

// NOTE: this is also the max number of teams
// if you change this, make sure to allocate more physics categories for each team's containment field
#define MAX_PLAYERS 4

#define GAME_VERSION 1

#define MAX_USERNAME 255

#define MAX_BONES 72

#define UI_JOYSTICK_DEAD_ZONE 0.5f
#define PLAYER_SPAWN_DELAY 3.0f
#define GAME_BUY_PERIOD (10.0f + PLAYER_SPAWN_DELAY)
#define CREDITS_INITIAL 60
#define CREDITS_MINION_KILL 10
#define CREDITS_SENSOR_DESTROY 10
#define CREDITS_CONTAINMENT_FIELD_DESTROY 10
#define CREDITS_ROCKET_DESTROY 5
#define CREDITS_DEFAULT_INCREMENT 5
#define CREDITS_ENERGY_PICKUP 5
#define CREDITS_CAPTURE_ENERGY_PICKUP 10
#define MAX_ABILITIES 3
#define DEFAULT_RUSH_DRONES 5

#define UPGRADE_TIME 1.5f
#define CAPTURE_TIME 5.0f

#define ENERGY_INCREMENT_INTERVAL 15.0f
#define CONTROL_POINT_RADIUS 3.5f
#define CONTROL_POINT_CAPTURE_TIME 90.0f

#define NET_TICK_RATE (1.0f / 60.0f)
#define NET_SYNC_TOLERANCE_POS 0.1f
#define NET_SYNC_TOLERANCE_ROT 0.1f
#define NET_INTERPOLATION_DELAY ((NET_TICK_RATE * 4.0f) + 0.02f)
#define NET_MAX_PACKET_SIZE 2000
#define NET_SEQUENCE_COUNT 511
#define NET_SEQUENCE_INVALID NET_SEQUENCE_COUNT
#define NET_ACK_PREVIOUS_SEQUENCES 64
#define NET_PREVIOUS_SEQUENCES_SEARCH 100
#define NET_MESSAGE_BUFFER 256
#define NET_TIMEOUT (r32(NET_MESSAGE_BUFFER) * NET_TICK_RATE)
#define NET_MAX_MESSAGES_SIZE (NET_MAX_PACKET_SIZE / 2)
#define NET_SEQUENCE_RESEND_BUFFER 16
#define NET_HISTORY_SIZE 256

#define MAX_ZONES 64

#define MAX_ENTITIES 2048

#define AWK_DASH_SPEED 20.0f
#define AWK_DASH_TIME 0.35f
#define AWK_DASH_DISTANCE (AWK_DASH_SPEED * AWK_DASH_TIME)
#define AWK_MAX_DISTANCE 25.0f
#define AWK_RADIUS 0.2f
#define AWK_VERTICAL_DOT_LIMIT 0.9998f
#define AWK_VERTICAL_ANGLE_LIMIT ((PI * 0.5f) - 0.021f)

#define AWK_SHIELD 1
#define AWK_HEALTH 1
#define AWK_FLY_SPEED 35.0f
#define AWK_CRAWL_SPEED 2.25f
#define AWK_COOLDOWN 3.0f
#define AWK_LEGS 3
#define AWK_OVERSHIELD_TIME 5.0f
#define AWK_SNIPE_DISTANCE 100.0f
#define AWK_CHARGES 3
#define AWK_THIRD_PERSON_OFFSET 2.0f
#define AWK_SHIELD_RADIUS 0.6f
#define AWK_SHIELD_ALPHA 0.2f

#define MAX_BONE_WEIGHTS 4

#define ROPE_SEGMENT_LENGTH 1.0f
#define ROPE_RADIUS 0.075f

#define SENSOR_TIME 1.0f
#define SENSOR_RADIUS 0.15f
#define SENSOR_HEALTH 3
#define SENSOR_RANGE 14.0f

#define CONTAINMENT_FIELD_RADIUS 12.0f
#define CONTAINMENT_FIELD_BASE_OFFSET 0.95f
#define CONTAINMENT_FIELD_LIFETIME 8.0f

#define ROCKET_RANGE (AWK_MAX_DISTANCE * 1.5f)
#define ROCKET_SPEED 15.0f

#define GRENADE_LAUNCH_SPEED 20.0f
#define GRENADE_RADIUS 0.125f
#define GRENADE_RANGE 14.0f
#define GRENADE_DELAY 1.5f

#define PROJECTILE_SPEED 20.0f
#define PROJECTILE_LENGTH 0.5f

#define ENERGY_PICKUP_RADIUS 0.55f

#define AIR_CONTROL_ACCEL 5.0f

#define TRANSITION_TIME 1.0f // time to transition between levels / overworld

#define PVP_ACCESSIBLE Vec4(0.7f, 0.7f, 0.7f, 1.0f)
#define PVP_ACCESSIBLE_NO_OVERRIDE Vec4(0.7f, 0.7f, 0.7f, MATERIAL_NO_OVERRIDE)
#define PVP_INACCESSIBLE Vec4(0.0f, 0.0f, 0.0f, MATERIAL_NO_OVERRIDE)

#define SCORE_SUMMARY_DELAY 2.0f
#define SCORE_SUMMARY_ACCEPT_DELAY 3.0f

#define ZONE_UNDER_ATTACK_TIME 90.0f
#define ZONE_UNDER_ATTACK_THRESHOLD 20.0f
#define ZONE_LOST_COOLDOWN (3.0f * 60.0f)

#define MAX_PATH_LENGTH 1024
#define AI_MAX_PATH_LENGTH 32
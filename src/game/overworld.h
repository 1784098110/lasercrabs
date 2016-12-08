#pragma once
#include "types.h"

struct cJSON;

namespace VI
{

struct EntityFinder;
struct RenderParams;
struct Camera;

namespace Overworld
{

struct ResourceInfo
{
	AssetID icon;
	AssetID description;
	s16 cost;
};

extern ResourceInfo resource_info[(s32)Resource::count];

void init(cJSON*);
void update(const Update&);
void draw_opaque(const RenderParams&);
void draw_hollow(const RenderParams&);
void draw_override(const RenderParams&);
void draw_ui(const RenderParams&);
void show(Camera*);
void conversation_finished();
void clear();
void execute(const char*);
void zone_done(AssetID);
b8 active();
void message_add(AssetID, AssetID, r64 = -1.0);

}

}

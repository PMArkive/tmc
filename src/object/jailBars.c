#include "global.h"
#include "entity.h"
#include "flags.h"
#include "room.h"
#include "sound.h"
#include "functions.h"

static void SetJailBarTiles(Entity*, u32);

extern void (*const gUnk_08124950[])(Entity*);
extern TileData gUnk_08124960[];
extern TileData gUnk_0812497A[];

void JailBars(Entity* this) {
    gUnk_08124950[this->action](this);
}

void sub_080A08C4(Entity* this) {
    if (CheckFlags(this->field_0x86.HWORD) == 0) {
        this->action = 1;
        SetJailBarTiles(this, 0);
    } else {
        this->action = 3;
        InitializeAnimation(this, 1);
        SetJailBarTiles(this, 1);
    }
    this->spriteSettings.draw = 3; // ???
    this->collisionLayer = 1;
    UpdateSpriteForCollisionLayer(this);
}

void sub_080A0910(Entity* this) {
    if (CheckFlags(this->field_0x86.HWORD) != 0) {
        this->action = 2;
        SetJailBarTiles(this, 1);
        SoundReq(SFX_10B);
    }
}

void sub_080A0938(Entity* this) {
    GetNextFrame(this);
    if (this->frame & ANIM_DONE) {
        this->action = 3;
        InitializeAnimation(this, 1);
    }
}

void nullsub_127(Entity* this) {
}

static void SetJailBarTiles(Entity* this, u32 arg1) {
    TileData* puVar1;

    puVar1 = gUnk_08124960;
    if (arg1 == 1) {
        puVar1 = gUnk_0812497A;
    }
    SetMultipleTiles(puVar1, COORD_TO_TILE(this), 1);
}

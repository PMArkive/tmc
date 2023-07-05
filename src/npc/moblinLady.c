/**
 * @file moblinLady.c
 * @ingroup NPCs
 *
 * @brief Moblin Lady NPC
 */
#include "entity.h"
#include "npc.h"

void MoblinLady(Entity* this) {
    if (this->action == 0) {
        this->action++;
        sub_0807DD50(this);
    } else {
        sub_0807DD94(this, 0);
    }
}

#include "../../domain.h"

inherit "/std/weapons/sword";

void setup(void) {
   set_id("big knife");
   set_adj("big");
   add_id("knife");
   set_short("A big knife");
   set_long("It is big, as knives go.");

   set_weapon_action("cut");
   set_sword_skill("small");
}
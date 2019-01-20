#include "../../domain.h"

inherit "/std/weapons/axe";

void setup(void) {
   ::setup();

   set_id("axe");
   add_ids("hand axe");
   set_adj("hand");
   set_short("A hand axe");
   set_long("The hand axe is commonly wielded by rangers.");
   set_combat_stats(10, 15, 10);
}

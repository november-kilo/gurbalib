#include "../../domain.h"

inherit "/std/weapons/sword";

void setup(void) {
   ::setup();

   set_id("flamberge");
   set_adj("two-handed");
   add_ids("two-handed flamberge");
   set_short("A two-handed flamberge");
   set_long("This two-handed flamberge looks like it has been " +
      "through some serious bouts of adventuring, yet it " +
      "remains in superb condition.");
   set_wield_type("dual");
   set_combat_stats(10, 15, 10);
   set_sword_skill("large");
}

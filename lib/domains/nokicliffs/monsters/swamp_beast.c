#include "../domain.h"

inherit "/std/monster";

void setup(void) {
   set_name("swamp beast");
   add_id("beast");
   set_short("A swamp beast");
   set_long("It has a tangle a mangrove roots wrapped around " +
      "what can only be described as a very deadly cypress tree.");
   set_level(20);
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 250);
   set_skill("combat/defense", 200);
}

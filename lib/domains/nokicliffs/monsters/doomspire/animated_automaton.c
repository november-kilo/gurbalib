#include "../../domain.h"

inherit "/std/monster";
inherit DIR + "/lib/simple_block";

nomask int is_inert(void) {
   return 0;
}

void setup(void) {
   set_name("automaton");
   set_gender("neuter");
   set_adj("monstrous");
   set_short("A monstrous automaton");
   set_long("The automaton has been brought to life by a " +
      "necromancer of considerable power. " +
      "It has been stitched together using a variety of " +
      "bits, pieces, and parts from other heroes, champions, " +
      "and villains. It has one and " +
      "only one purpose, and that is to destroy the living.");
   set_aggressive(0);
   set_level(1);
   set_hit_skill("combat/unarmed");
   set_skill("combat/defense", 1);
   set_skill("combat/unarmed", 200);
   add_block("up");
}

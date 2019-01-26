#include "../domain.h"

inherit "/std/monster";

void setup() {
   set_name("bat");
   set_short("A bat");
   set_long("A small bat, with sharp fangs. It seems to be all alone here.");

   set_aggressive(1);
   set_race("animal");
   set_level(1);
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 50);
   set_skill("combat/defense", 100);
   set_hit_string("bite");
}

void monster_died(void) {
   if (killer) {
      killer->simple_action("The bat gives off a high pitched shriek as " +
         "$N $vgive it a killing blow.");
   }
}

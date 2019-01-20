#include "../domain.h"

inherit "/std/monster";

void create(void) {
   ::create();
   set_level(20);
   set_skill("combat/unarmed", 250);
   set_skill("combat/defense", 200);
}

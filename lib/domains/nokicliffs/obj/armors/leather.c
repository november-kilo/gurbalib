#include "../../domain.h"

inherit "/std/armor";

void setup(void) {
   set_id("leather");
   set_short("A suit of leather armor");
   set_long("This fine suit of leather armor looks stylish " +
      "and protects you in combat at the same time.");
   set_slot("body");
   set_value(1);
   set_size(1);
   set_weight(1);
   set_ac(1);
}

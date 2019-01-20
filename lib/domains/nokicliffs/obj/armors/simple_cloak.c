#include "../../domain.h"

inherit "/std/armor";

void setup(void) {
   set_id("cloak");
   add_ids("simple cloak");
   set_adj("simple");
   set_short("A simple cloak");
   set_long("This simple cloak is finely crafted.");
   set_slot("body");
   set_value(1);
   set_size(1);
   set_weight(1);
   set_ac(1);
}

#include "../../domain.h"

inherit "/std/armor";

void setup(void) {
   set_id("robe");
   set_short("A monk's robe");
   set_long("The monk's robe is constructed of simple materials. It is " +
      "sturdy enough but one ought " +
      "not to rely upon it for protection from " +
      "blows. The monk's robes were almost certainly fabricated by the " +
      "monk who originally owned it.");

   set_wear_message("$N $vput on $o, and $vlook like a monk.");
   set_remove_message("$N $vtake off $o, and no longer $vlook like a monk.");

   set_slot("body");
   set_value(1);
   set_size(1);
   set_weight(1);
   set_ac(1);
}

#include "../../domain.h"

inherit DIR + "/lib/armor";

int affix_effect(string affix_name) {
   string str;
   int x;

   x = ::affix_effect(affix_name);

   if (affix_name == "sigil" && !x && has_affix("sigil")) {
      str = "$N $vtouch the glowing sigil of champions " +
         "affixed to $p crown.";
      this_player()->simple_action(str, this_player());
      x = 1;
   }

   return x;
}

void add_affix_side_effect(string affix_name) {
   if (affix_name == "sigil") {
      set_short("A metal crown glowing with the aura of a champion");
   }
}

void remove_affix_side_effect(string affix_name) {
   if (affix_name == "sigil") {
      set_short("A metal crown");
   }
}

void setup(void) {
   set_id("crown");
   set_adj("metal");
   set_short("A metal crown");
   set_long("This crown functions as a useful helmet." +
      " It is a simple crown of metal but you know that it's ancient " +
      "and has rested upon the heads of champions throughout the " +
      "ages.");
   set_helmet();
   add_affix("sigil");
}

void after_wear(object player) {
   if (!player) {
      return;
   }

   player->message("Yours is a crowned head now.");
}

void after_unwear(object player, string cmd) {
   if (!player) {
      return;
   }

   if (!nilp(cmd)) {
      player->message("Yours is no longer a crowned head.");
   }
}

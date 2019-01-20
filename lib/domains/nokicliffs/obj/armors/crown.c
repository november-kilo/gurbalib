#include "../../domain.h"

inherit DIR + "/lib/armor";

void setup(void) {
   set_id("crown");
   set_adj("metal");
   set_short("A metal crown");
   set_long("This crown functions as a useful helmet." +
      " It is a simple crown of metal but you know that it's ancient " +
      "and has rested upon the heads of champions throughout the " +
      "ages.");
   set_helmet();
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

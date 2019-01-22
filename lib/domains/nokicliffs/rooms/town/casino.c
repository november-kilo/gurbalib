#include "../../domain.h"

inherit DIR + "/lib/room";

void setup(void) {
   set_short("Noki Town casino");
   set_long("You are at Noki Town's casino. A grand " +
      "staircase leads up to the hotel lobby. The " +
      "public bath is north from here. Many of the " +
      "villagers are here, as well as a goodly number " +
      "of transients, playing the most famous game in " +
      "Noki Town, the one-armed bandit.");

   set_exits(([
      "up" : DIR + "/rooms/town/hotel_lobby.c",
      "north" : DIR + "/rooms/town/public_bath.c"
   ]));

   set_objects(NOKICLIFFS_TOWN_ONE_ARMED_BANDIT);
}

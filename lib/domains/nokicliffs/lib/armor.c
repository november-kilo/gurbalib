#include "../domain.h"

inherit armor "/std/armor";
inherit affixable DIR + "/lib/affixable";
inherit DIR + "/lib/effects_for_affixables/rescue_effect";

int affix_effect(string affix_name) {
   if (!has_affixes()) {
      return 1;
   }

   if (!query_worn()) {
      write("You must wear it first.");
      return 2;
   }

   if (affix_name == "emerald" && has_affix("emerald")) {
      affix_rescue_effect(this_object()->query_environment());
      return 3;
   }

   return 0;
}

void set_armor_stats(string slot, int ac, int value, int size, int weight) {
   set_slot(slot);
   set_ac(ac);
   set_value(value);
   set_size(size);
   set_weight(weight);
}

void set_helmet(void) {
   set_armor_stats("head", 2, 20, 1, 2);
}

void set_heavy(void) {
   set_armor_stats("body", 10, 100, 3, 8);
}

void set_medium(void) {
   set_armor_stats("body", 8, 80, 3, 7);
}

void set_light(void) {
   set_armor_stats("body", 6, 60, 3, 6);
}

void set_ultra_light(void) {
   set_armor_stats("body", 4, 40, 3, 4);
}

void create(void) {
   armor::create();
   affixable::create();
   set_ac(1);
   set_value(10);
   set_size(1);
   set_weight(1);
   enable_affixes();
}

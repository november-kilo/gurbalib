inherit "/std/armor";

void set_armor_stats(string slot, int ac, int value, int size, int weight) {
   set_slot(slot);
   set_ac(ac);
   set_value(value);
   set_size(size);
   set_weight(weight);
}

void set_helmet(void) {
   set_armor_stats("head", 3, 30, 1, 3);
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
   ::create();
   set_ac(1);
   set_value(10);
   set_size(1);
   set_weight(1);
}

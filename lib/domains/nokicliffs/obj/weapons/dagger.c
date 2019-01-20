inherit "/std/weapons/sword";

void setup(void) {
   ::setup();
   set_id("dagger");
   set_short("A dagger");
   set_adj("simple");
   set_long("A simple dagger for the unenthusiastic combatant.");
   set_combat_stats(1, 300, 10);
   set_sword_skill("small");
}

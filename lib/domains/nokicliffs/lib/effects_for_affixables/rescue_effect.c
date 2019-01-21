#include "../../../../domain.h"

int affix_rescue_effect(object to_be_rescued) {
   to_be_rescued->simple_action("$N $vcall for immediate " +
      "evacuation from the area and $vdisappear in a puff " +
      "of emerald green smoke.", to_be_rescued);
   to_be_rescued->move(NOCLIFFS_TOWN_SQUARE_MIDDLE);
   to_be_rescued->simple_action("$N $vappear in a puff of " +
         "emerald green smoke.", to_be_rescued);
   return 1;
}

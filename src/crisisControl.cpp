#include <iostream>
#include <windows.h>
#include "lawmakers.h"

int main() {
  bool weAreInAmerica = true, tragedyHappens = true;
  int untilNextTragedy = 2000;
  Lawmakers lawmakers;


/* begin */
  while (weAreInAmerica) {
    if (tragedyHappens) {
      if (lawmakers.represent() == "thePeople") {
        lawmakers.actuallyHelpThoseAffected = true;
      } else if (lawmakers.represent() == "donorsAndLobbyists") {
        officialStatement();
        Sleep(untilNextTragedy);
      }
    }
  }
  return 0;
}

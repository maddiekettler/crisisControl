#include <iostream>
#include "lawmakers.h"

int main() {
  bool weAreInAmerica = true, tragedyHappens = true;
  Lawmakers lawmakers;

  if (weAreInAmerica && tragedyHappens) {
    if (lawmakers.represent() == "thePeople") {
      lawmakers.actuallyHelpThoseAffected = true;
    } else if (lawmakers.represent() == "donorsAndLobbyists") {
      officialStatement();
    }
  }
  return 0;
}

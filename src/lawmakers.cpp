#include <iostream>
#include <string>
#include "lawmakers.h"

std::string& Lawmakers::represent() {
// https://www.opensecrets.org/lobby/clientsum.php?id=D000000082
  hush(4130000);
  return rep;
}

void Lawmakers::hush(int money) {
// small donors make good press, big donors get you reelected
  if (money > 200) {
    rep = "donorsAndLobbyists";
  // this doesn't really do anything; more symbolic
    actuallyHelpThoseAffected = false;
  } else {
    // in an ideal world
    rep = "thePeople";
  }
}

void officialStatement() {
  std::cout << " \"Thoughts and Prayers\" - sent from a staffer's iPhone\n" << std::endl;
}

#include <iostream>
#include <string>
#include "lawmakers.h"

std::string& Lawmakers::represent() {
  hush();
  return rep;
}

void Lawmakers::hush() {
  rep = "donorsAndLobbyists";
  // this doesn't really do anything; more symbolic
  actuallyHelpThoseAffected = false;
}

void officialStatement() {
  std::cout << " \"Thoughts and Prayers\" - sent from a staffer's iPhone" << std::endl;
}

#ifndef __lawmakers_h_
#define __lawmakers_h_

#include <iostream>
#include <string>

class Lawmakers {
public:
  Lawmakers(){}

  bool actuallyHelpThoseAffected;

  std::string& represent();

private:
  std::string rep;
  void hush(int money);
};

void officialStatement();

#endif

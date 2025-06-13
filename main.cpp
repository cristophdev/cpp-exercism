#include <iostream>
#include "src/log_levels.h"

using namespace log_line;

int main() {
  std::string str = message("String");

  std::cout << str << std::endl;
  return 0;
}
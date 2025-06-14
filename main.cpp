#include <iostream>
#include "src/lasagna.h"

using namespace lasagna;

int main() {
  int time = 39;
  int timeTwo = 20;
  int timeThree = 30;

  int ovenT = lasagna::ovenTime();
  int remainingT = lasagna::remainingOvenTime(time);
  int preparationT = lasagna::preparationTime(timeTwo);
  int elapsedT = lasagna::elapsedTime(timeTwo, timeThree); 

  std::cout << ovenT << std::endl;
  std::cout << remainingT << std::endl;
  std::cout << preparationT<< std::endl;
  std::cout << elapsedT << std::endl;
  return 0;
}
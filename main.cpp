#include <iostream>
#include "src/power_of_troy/power_of_troy.h"

using namespace std;

int main()
{
  troy::human HUMAN1;
  troy::human HUMAN2;
  troy::give_new_artifact(HUMAN1, "MIGHT");
  troy::give_new_artifact(HUMAN2, "WILL");

  // type: troy::artifact *POSSESION_PT
  auto POSSESION_PT = HUMAN1.possession.get();
  auto POSSESION2_PT = HUMAN2.possession.get();

  cout << "Before exchange:" << endl;
  cout << "HUMAN1 artifact: " << POSSESION_PT->name << " at " << POSSESION_PT << endl;
  cout << "HUMAN2 artifact: " << POSSESION2_PT->name << " at " << POSSESION2_PT << endl;

  troy::exchange_artifacts(HUMAN1.possession, HUMAN2.possession);

  POSSESION_PT = HUMAN1.possession.get();
  POSSESION2_PT = HUMAN2.possession.get();

  cout << "\nAfter exchange:" << endl;
  cout << "HUMAN1 artifact: " << POSSESION_PT->name << " at " << POSSESION_PT << endl;
  cout << "HUMAN2 artifact: " << POSSESION2_PT->name << " at " << POSSESION2_PT << endl;
  return 0;
}
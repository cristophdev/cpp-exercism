#include <iostream>
#include "src/lasagna_master/lasagna_master.h"

using namespace std;

int main()
{
  ingredients list {"Pim", "Pam", "Truku", "Truku"};

  int time = lasagna_master::preparationTime(list, 2);
  lasagna_master::addSecretIngredient(list, "mtc");

  cout << "Preparation Time: " << time << endl;

  cout << "Ingredients: " << endl;
  for (auto i : list)
  {
    cout << i << endl;
  }
  return 0;
}
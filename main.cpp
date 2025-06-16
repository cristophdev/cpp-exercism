#include <iostream>
#include "src/space_age/space_age.h"

using namespace std;

int main()
{
  space_age::space_age MY_AGE{631152000};

  cout << "On earth: " << MY_AGE.on_earth() << endl;
  cout << "On Jupiter: " << MY_AGE.on_jupiter() << endl;
  cout << "Mercury: " << MY_AGE.on_mercury() << endl;
  return 0;
}
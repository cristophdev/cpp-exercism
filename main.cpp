#include <iostream>
#include "src/leap/leap.h"

using namespace std;

int main()
{
  int year = 2004; // MY BD
  int actualYear = 2025;

  cout << "2004 is a leap year? " << leap::is_leap_year(year) << endl;
  cout << "2025 is a leap year? " << leap::is_leap_year(actualYear) << endl;
  return 0;
}
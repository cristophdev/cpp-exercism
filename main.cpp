#include <iostream>
#include "src/raindrops/raindrops.h"

using namespace std;

int main()
{
  string RAINDROPS = raindrops::convert(33);

  cout << RAINDROPS << endl;
  return 0;
}
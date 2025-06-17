#include <iostream>
#include "src/grains/grains.h"

using namespace std;

int main()
{
  uint64_t a = grains::square(64);

  cout << a << endl;

  return 0;
}
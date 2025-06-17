#include <iostream>
#include "src/pangram/pangram.h"

using namespace std;

int main()
{
  bool PANGRAM = pangram::is_pangram("Hello this is not a pangram");

  cout << PANGRAM << endl;
  return 0;
}
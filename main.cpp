#include <iostream>
#include "src/last_will.h"

using namespace std;

int main() {
  int ZHANG_BANK_NUMBER_PART = zhang::bank_number_part(1000);
  int ZHANG_RED = zhang::red::code_fragment();

  cout << "Zhang Bank Number Part: " << ZHANG_BANK_NUMBER_PART << endl;
  cout << "Zhang Red: " << ZHANG_RED << endl;
  return 0;
}
#include <iostream>
#include "src/reverse_string/reverse_string.h"

using namespace std;

int main()
{
  string name = "Cristopher";

  cout << "Original string: " << name << " reversed string: " << reverse_string::reverse_string(name) << endl;
  return 0;
}
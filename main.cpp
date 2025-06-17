#include <iostream>
#include "src/protein_translation/protein_translation.h"

using namespace std;

int main()
{
  const string protein{"UUA"};

  vector<string> PROTEINS = protein_translation::proteins(protein);

  for (auto i : PROTEINS)
  {
    cout << i << endl;
  }
  return 0;
}
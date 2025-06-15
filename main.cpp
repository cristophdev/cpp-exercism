#include <iostream>
#include "src/doctor_data/doctor_data.h"

using namespace std;

int main()
{
  heaven::Vessel VESSEL1("Whatever", 10, star_map::System::AlphaCentauri);

  auto v = VESSEL1.replicate("Eea");
  VESSEL1.make_buster();

  cout << "Name of v: " << v.name << endl;
  cout << "Busters: " << VESSEL1.busters << endl;
  return 0;
}
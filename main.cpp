#include <iostream>
#include "src/vehicle_purchase/vehicle_purchase.h"

using namespace std;

int main() {
  bool NEEDS_LICENCE = vehicle_purchase::needs_license("Bicycle");
  string CHOOSE_VEHICLE = vehicle_purchase::choose_vehicle("Mercedez", "Buggati");
  double RESELL_PRICE = vehicle_purchase::calculate_resell_price(1000000.0, 2.0);

  cout << "A bicycle needs a licence? " << NEEDS_LICENCE << endl;
  cout << "Is a bugatti better than a Mercedez? " << CHOOSE_VEHICLE << endl;
  cout << "How much you can sell your car for? " << RESELL_PRICE << endl;
  return 0;
}
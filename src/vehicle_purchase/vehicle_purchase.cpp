#include "vehicle_purchase.h"

namespace vehicle_purchase
{
  bool needs_license(std::string kind)
  {
    if (kind == "car" || kind == "truck")
    {
      return true;
    }
    return false;
  }

  std::string choose_vehicle(std::string option1, std::string option2)
  {
    if (option1 < option2)
    {
      return option1 + " is clearly the better choice.";
    }
    else
    {
      return option2 + " is clearly the better choice.";
    }
  }

  double calculate_resell_price(double original_price, double age)
  {
    if (age < 3)
    {
      return original_price - original_price * 0.20;
    }
    else if (age >= 3 && age < 10)
    {
      return original_price - original_price * 0.30;
    }
    else
    {
      return original_price / 2;
    }
  }

} // namespace vehicle_purchase
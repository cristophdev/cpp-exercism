#include <iostream>
#include "src/freelancer_rates.h"

int main() {
  int DAILY_RATE = freelancer_rates::daily_rate(8);
  int DISCOUNT = freelancer_rates::apply_discount(400, 10);
  int MONTHLY_RATE = freelancer_rates::monthly_rate(10, 5);
  int DAYS_IN_BUDGET = freelancer_rates::days_in_budget(400, 10, 5);

  std::cout << "Daily Rate: " << DAILY_RATE << std::endl;
  std::cout << "Discount: " << DISCOUNT << std::endl;
  std::cout << "Monthly Rate: " << MONTHLY_RATE << std::endl;
  std::cout << "Days in Budget: " << DAYS_IN_BUDGET << std::endl;
  return 0;
}
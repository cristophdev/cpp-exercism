#include <cmath>

namespace freelancer_rates
{
  double daily_rate(double hourly_rate)
  {
    return 8.0 * hourly_rate;
  }

  double apply_discount(double before_discount, double discount)
  {
    return before_discount - (before_discount * discount / 100);
  }

  int monthly_rate(double hourly_rate, double discount)
  {
    return ceil(apply_discount(daily_rate(hourly_rate) * 22, discount));
  }

  int days_in_budget(int budget, double hourly_rate, double discount)
  {
    return floor(budget / apply_discount(daily_rate(hourly_rate), discount));
  }
}
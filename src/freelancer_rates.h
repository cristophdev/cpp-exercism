#pragma once

namespace freelancer_rates {
  double daily_rate(double hourly_rate);
  double apply_discount(double before_discount, double discount);
  int monthly_rate(double hourly_rate, double discount);
  int days_in_budget(int budget, double hourly_rate, double discount);
}
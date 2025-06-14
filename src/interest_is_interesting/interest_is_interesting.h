#pragma once

namespace interest_is_interesting
{
  double interest_rate(double balance);
  double yearly_interest(double balance);
  double annual_balance_update(double balance);
  int years_until_desired_balance(double balance, double target_balance);
}
#include "interest_is_interesting.h"

namespace interest_is_interesting {
  double interest_rate(double balance) {
      if (balance < 0) {
          return 3.213;
      } else if (balance >= 0 && balance < 1000) {
          return 0.5;
      } else if (balance >= 1000 && balance < 5000) {
          return 1.621;
      } else {
          return 2.475;
      }
  }
  
  double yearly_interest(double balance) {
      return balance * (interest_rate(balance) / 100);
  }
  
  double annual_balance_update(double balance) {
      return balance + yearly_interest(balance);
  }
  
  int years_until_desired_balance(double balance, double target_balance) {
      int count = 0;
      while (balance < target_balance) {
          balance = annual_balance_update(balance);
          count++;
      }
      return count;
  }
}
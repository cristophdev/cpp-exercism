#include <iostream>
#include "src/interest_is_interesting/interest_is_interesting.h"

using namespace std;

int main()
{
  double balance = 9850.50;
  double target_balance = 100000.00;

  double INTEREST_RATE = interest_is_interesting::interest_rate(balance);
  double YEARLY_INTEREST = interest_is_interesting::yearly_interest(balance);
  double ANNUAL_BALANCE_UPDATE = interest_is_interesting::annual_balance_update(balance);
  double YEARS_UNTIL_DESIRED_BALANCE = interest_is_interesting::years_until_desired_balance(balance, target_balance);

  cout << "Interest Rate: " << INTEREST_RATE << endl;
  cout << "Yearly Interest: " << YEARLY_INTEREST << endl;
  cout << "Annual Balance Update: " << ANNUAL_BALANCE_UPDATE << endl;
  cout << "Years Until Desired Balance: " << YEARS_UNTIL_DESIRED_BALANCE << endl; 
  return 0;
}
#include <iostream>
#include "src/troll_the_trolls/troll_the_trolls.h"

using namespace std;

int main()
{
  troll_the_troll::AccountStatus ACCOUNT1 = troll_the_troll::AccountStatus::troll;
  troll_the_troll::AccountStatus ACCOUNT2 = troll_the_troll::AccountStatus::user;

  cout << "Can you have permission? " << troll_the_troll::permission_check(troll_the_troll::Action::write, ACCOUNT1) << endl;
  cout << "Have you priority? " << troll_the_troll::has_priority(ACCOUNT1, ACCOUNT2) << endl;
  return 0;
}
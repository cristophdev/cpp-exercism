#include <iostream>
#include "src/pacman_rules/pacman_rules.h"

using namespace std;

int main() {
  bool CAN_EAT_GHOST = pacman_rules::can_eat_ghost(false, true);
  bool SCORED = pacman_rules::scored(true, true);
  bool LOST = pacman_rules::lost(false, true);
  bool WON = pacman_rules::won(false, false, true);

  cout << "Can you eat a ghost?: " << CAN_EAT_GHOST << endl;
  cout << "Have you scored?: " << SCORED << endl;
  cout << "Have you lost?: " << LOST << endl;
  cout << "Have you won?: " << WON << endl;
  return 0;
}
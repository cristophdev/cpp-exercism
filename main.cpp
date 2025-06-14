#include <iostream>
#include "src/ellens_alien_game/ellens_alien_game.h"

using namespace std;

int main()
{
  ellens_alien_game::Alien Alien(0, 0);
  cout << "Alien's health: " << Alien.get_health() << endl;

  Alien.hit();
  cout << "Alient's health after a hit: " << Alien.get_health() << endl;
  cout << "Is the alien alive? " << Alien.is_alive() << endl;

  cout << endl;

  cout << "Alien teleported!! " << Alien.teleport(1, 2) << endl;
  return 0;
}
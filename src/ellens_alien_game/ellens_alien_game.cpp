#include "ellens_alien_game.h"

namespace ellens_alien_game
{
  Alien::Alien(int x, int y)
      : x_coordinate(x), y_coordinate(y) {}

  int Alien::get_health()
  {
    return health;
  }

  bool Alien::hit()
  {
    if (health > 0)
    {
      health = health - 1;
      return true;
    }
    return false;
  }

  bool Alien::is_alive()
  {
    return health > 0;
  }

  bool Alien::teleport(int x, int y)
  {
    x_coordinate = x;
    y_coordinate = y;
    return true;
  }

  bool Alien::collision_detection(const Alien &alien)
  {
    return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
  }
} // namespace targets
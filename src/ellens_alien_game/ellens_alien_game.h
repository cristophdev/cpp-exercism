#pragma once

namespace ellens_alien_game
{
  class Alien
  {
  public:
    Alien(int x, int y);

    int get_health();
    bool hit();
    bool is_alive();
    bool teleport(int x, int y);
    bool collision_detection(const Alien &alien);

  private:
    int health{3};
    int x_coordinate{0};
    int y_coordinate{0};
  };
} // namespace targets
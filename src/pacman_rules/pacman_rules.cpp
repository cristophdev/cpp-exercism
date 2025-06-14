#include "pacman_rules.h"

namespace pacman_rules
{
  bool can_eat_ghost(bool power_pellet_active, bool touching_ghost)
  {
    return power_pellet_active and touching_ghost ? true : false;
  }

  bool scored(bool touching_power_pellet, bool touching_dot)
  {
    return touching_power_pellet or touching_dot ? true : false;
  }

  bool lost(bool power_pellet_active, bool touching_ghost)
  {
    return !power_pellet_active and touching_ghost ? true : false;
  }

  bool won(bool has_eaten_all_dots, bool power_pellet_active,
           bool touching_ghost)
  {
    return has_eaten_all_dots and !lost(power_pellet_active, touching_ghost) ? true : false;
  }
}
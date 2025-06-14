#pragma once

namespace pacman_rules
{
  bool can_eat_ghost(bool power_pellet_active, bool touching_ghost);
  bool scored(bool touching_power_pellet, bool touching_dot);
  bool lost(bool power_pellet_active, bool touching_ghost);
  bool won(bool has_eaten_all_dots, bool power_pellet_active,
           bool touching_ghost);
}
#include "troll_the_trolls.h"

namespace troll_the_troll
{
  bool display_post(AccountStatus accountOne, AccountStatus accountTwo)
  {
    if (accountOne == AccountStatus::troll)
    {
      return accountTwo == AccountStatus::troll;
    }
    return true;
  }

  bool permission_check(Action action, AccountStatus status)
  {
    switch (status)
    {
    case AccountStatus::guest:
      return action == Action::read;
      break;
    case AccountStatus::user:
      return action == Action::read || action == Action::write;
      break;
    case AccountStatus::mod:
      return action == Action::read || action == Action::write || action == Action::remove;
      break;
    case AccountStatus::troll:
      return action == Action::read || action == Action::write;
      break;
    default:
      return false;
      break;
    }
  }

  bool valid_player_combination(AccountStatus accountOne, AccountStatus accountTwo)
  {
    if (accountOne == AccountStatus::guest || accountTwo == AccountStatus::guest)
    {
      return false;
    }
    if (accountOne == AccountStatus::troll && accountTwo != AccountStatus::troll)
    {
      return false;
    }
    if (accountOne != AccountStatus::troll && accountTwo == AccountStatus::troll)
    {
      return false;
    }
    return true;
  }

  bool has_priority(AccountStatus accountOne, AccountStatus accountTwo)
  {
    if (accountOne > accountTwo)
    {
      return true;
    }
    return false;
  }

} // namespace hellmath
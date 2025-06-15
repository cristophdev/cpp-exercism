#pragma once

namespace troll_the_troll
{
  enum AccountStatus
  {
    troll,
    guest,
    user,
    mod,
  };

  enum Action
  {
    read,
    write,
    remove,
  };

  bool display_post(AccountStatus accountOne, AccountStatus accountTwo);
  bool permission_check(Action action, AccountStatus status);
  bool valid_player_combination(AccountStatus accountOne, AccountStatus accountTwo);
  bool has_priority(AccountStatus accountOne, AccountStatus accountTwo);
} // namespace hellmath
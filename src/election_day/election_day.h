#pragma once

#include <string>
#include <vector>

namespace election_day
{
  struct ElectionResult
  {
    std::string name{};
    int votes{};
  };

  int vote_count(ElectionResult &v);
  void increment_vote_count(ElectionResult &v, int values);
  ElectionResult &determine_result(std::vector<ElectionResult> &final_count);
} // namespace election_day
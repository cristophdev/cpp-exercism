#include "election_day.h"

#include <string>
#include <vector>

namespace election_day
{
  int vote_count(ElectionResult &v)
  {
    return v.votes;
  };

  void increment_vote_count(ElectionResult &v, int values)
  {
    v.votes += values;
  };

  ElectionResult &determine_result(std::vector<ElectionResult> &final_count)
  {
    int max = 0;
    int index = 0;
    for (int i = 0; i < final_count.size(); i++)
    {
      if (final_count[i].votes > max)
      {
        max = final_count[i].votes;
        index = i;
      }
    }
    final_count[index].name = "President " + final_count[index].name;
    return final_count[index];
  };
} // namespace election_day
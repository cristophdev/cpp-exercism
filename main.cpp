#include <iostream>
#include "src/election_day/election_day.h"

using namespace std;

int main()
{
  election_day::ElectionResult candidate1{"Cristopher", 999};
  election_day::ElectionResult candidate2{"Whoever", 100};

  vector<election_day::ElectionResult> finalCount = {candidate1, candidate2};

  auto &winner = election_day::determine_result(finalCount);

  cout << candidate1.name << " votes: " << election_day::vote_count(candidate1) << endl;
  cout << candidate2.name << " votes: " << election_day::vote_count(candidate2) << endl;

  cout << endl
       << "Winner: " << winner.name << " with " << winner.votes << " votes." << endl;
  return 0;
}
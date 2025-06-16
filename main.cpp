#include <iostream>
#include "src/speedywagon_fundation/speedywagon_fundation.h"

using namespace std;

int main()
{
  speedywagon::pillar_men_sensor SPEEDYWAGON{10, "LA", {1, 2, 3}};
  size_t dimension = 10;

  cout << "DATA IN THE SPEEDYWAGON: " << endl;
  for (size_t i = 0; i < SPEEDYWAGON.data.size(); ++i)
  {
    cout << SPEEDYWAGON.data[i];
    if (i == SPEEDYWAGON.data.size() - 1)
      cout << "." << endl;
    else
      cout << ", ";
  }

  auto UV_LIGHT_HEURISTIC = speedywagon::uv_light_heuristic(&SPEEDYWAGON.data);
  cout << "UV LIGHT HEURISTIC:" << UV_LIGHT_HEURISTIC << endl;

  bool CONNECTION_CHECK = speedywagon::connection_check(&SPEEDYWAGON);
  cout << "CONNECTION CHECK: " << CONNECTION_CHECK << endl;

  int ACTIVITY_COUNTER = speedywagon::activity_counter(&SPEEDYWAGON, dimension);
  cout << "ACTIVITY COUNTER: " << ACTIVITY_COUNTER << endl;

  bool ALARM_CONTROL = speedywagon::alarm_control(&SPEEDYWAGON);
  cout << "ALARM CONTROL: " << ALARM_CONTROL << endl;

  return 0;
}
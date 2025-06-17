#include <iostream>
#include "src/triangle/triangle.h"

using namespace std;

std::string to_string(triangle::flavor f) {
  switch (f) {
    case triangle::flavor::equilateral: return "equilateral";
    case triangle::flavor::isosceles:   return "isosceles";
    case triangle::flavor::scalene:     return "scalene";
    default: return "unknown";
  }
}

int main()
{
  double A = 3.0;
  double B = 3.0;
  double C = 3.0;

  auto w = triangle::kind(A, B, C);

  cout << to_string(w) << endl;
  return 0;
}
#include <iostream>
#include "src/making_the_grade/making_the_grade.h"
#include <vector>
#include <array>

using namespace std;

template <typename T>
void print_vector(const vector<T> &vec)
{
  for (const auto &el : vec)
  {
    cout << el << " ";
  }
  cout << endl;
}

template <typename T, size_t N>
void print_array(const array<T, N> &arr)
{
  for (const auto &el : arr)
  {
    cout << el << " ";
  }
  cout << endl;
}

int main()
{
  vector<double> student_scores = {9.2, 40.3, 60.6, 99.9, 80.3};
  vector<string> student_names = {"Pepe", "Juan", "Aritz", "Cristopher", "Magnus"};

  vector<int> ROUND_DOWN_SCORES = making_the_grade::round_down_scores(student_scores);
  int FAILED_STUDENTS = making_the_grade::count_failed_students(ROUND_DOWN_SCORES);
  vector<int> ABOVE_THRESHOLD = making_the_grade::above_threshold(ROUND_DOWN_SCORES, 70);
  array<int, 4> LETTER_GRADES = making_the_grade::letter_grades(99);
  vector<string> STUDENT_RANKING = making_the_grade::student_ranking(ROUND_DOWN_SCORES, student_names);
  string PERFECT_SCORE = making_the_grade::perfect_score(ROUND_DOWN_SCORES, student_names);

  cout << "Notes: ";
  print_vector(ROUND_DOWN_SCORES);

  cout << "Failed Students: " << FAILED_STUDENTS << endl;

  cout << "Above Threshold " << 70 << ": ";
  print_vector(ABOVE_THRESHOLD);

  cout << "Letter Grades: ";
  print_array(LETTER_GRADES);

  cout << "Student Ranking: ";
  print_vector(STUDENT_RANKING);

  cout << "Perfect Score: " << PERFECT_SCORE << endl;
  return 0;
}
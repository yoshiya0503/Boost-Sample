#ifndef STUDENT_h
#define STUDENT_h
#include <iostream>
#include <vector>
#include <string>
struct Student {
  std::string name;
  double mid;
  double last;
  std::vector<double> homework;
};
std::istream& read(std::istream&, Student&);
#endif

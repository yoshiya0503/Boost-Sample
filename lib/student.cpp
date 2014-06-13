#include "student.h"
#include "func.h"

std::istream& read_hw(std::istream& in, std::vector<double>& hw) {
  if (in) {
    hw.clear();
    double x;
    while (in >> x) {
      hw.push_back(x);
    }
    in.clear();
  }
  return in;
}

std::istream& read(std::istream& is, Student& s) {
  std::cout << "prease input homework" << std::endl;
  is >> s.name >> s.mid >> s.last;
  read_hw(is, s.homework);
  return is;
}

bool fgrade(Student& s) {
  return grade(s.mid, s.last, median(s)) < 60;
}

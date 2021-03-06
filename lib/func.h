#ifndef FUNC_h
#define FUNC_h
#include <iostream>
#include "student.h"
/**
 * grade
 */
double grade(double mid, double last, double home) {
  return 0.2 * mid + 0.4 * last + 0.4 * home; 
}

/**
 * median
 */
/*
double median(std::vector<double> homework) {
  typedef std::vector<double>::size_type vec_sz;
  vec_sz size = homework.size();
  if (size == 0) {
    std::cout << std::endl;
    throw std::domain_error("blank of median");
  }
  sort(homework.begin(), homework.end());
  vec_sz med = size / 2;
  return (size % 2 != 0) ? homework[med] : (homework[med] + homework[med - 1]) / 2;
}
*/

/**
 * median
 */
double median(Student& s) {
  typedef std::vector<double>::size_type vec_sz;
  vec_sz size = s.homework.size();
  if (size == 0) {
    std::cout << std::endl;
    throw std::domain_error("blank of median");
  }
  std::sort(s.homework.begin(), s.homework.end());
  vec_sz med = size / 2;
  return (size % 2 != 0) ? s.homework[med] : (s.homework[med] + s.homework[med - 1]) / 2;
}

#endif


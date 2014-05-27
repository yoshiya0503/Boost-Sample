#include <iostream>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <string>
#include <vector>
#include <stdexcept>
#include "func.h"
#include "student.h"

using namespace std;
/**
 * main function
 */
int main() {

  Student student;
  cout << "set your name" << endl;
  cin >> student.name;

  cout << "hello " << student.name << endl;
  cout << "prease input mid and last" << endl;

  read(cin, student);
  double med = median(student.homework);
  
  try {
    double g = grade(student.mid, student.last, med);
    cout << g << endl;
  } catch(domain_error) {
    cout << "エラー" << endl;
    return 1;
  }
  return 0;
}

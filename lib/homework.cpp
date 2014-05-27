#include <iostream>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <string>
#include <vector>

using namespace std;

int main() {

  cout << "set your name" << endl;
  string name;
  cin >> name;

  cout << "hello " << name << endl;
  cout << "prease input mid and last" << endl;

  double mid;
  double last;
  cin >> mid >> last;

  cout << "prease input homework" << endl;
  vector<double> homework;
  double x = 0;
  while (cin >> x) {
    homework.push_back(x);
  }
  typedef vector<double>::size_type vec_sz;
  vec_sz size = homework.size();

  if (size == 0) {
    cout << endl;
    return 1;
  }

  sort(homework.begin(), homework.end());
  vec_sz med = size / 2;

  vec_sz median = size % 2 != 0 ? homework[med] : (homework[med] + homework[med - 1]) / 2;

  cout << 0.2 * mid + 0.4 * last + 0.4 * median << endl;

  return 0;
}

#ifndef STUDENT_h
#define STUDENT_h
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <algorithm>
class Student_info {

private:
    std::string name;
    double mid, last;
    std::vector<double> homework;

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

public:
    Student_info();
    bool valid() const;
    std::string getName() const;
    double grade();
    double median();
    bool isFailed();
    std::istream& read(std::istream& is);
};

#endif

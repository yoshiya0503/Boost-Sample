#ifndef STUDENT_h
#define STUDENT_h
#include <iostream>
#include <vector>
#include <string>
class Student_info {

private:
    std::string name;
    double mid, last, home;
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
    bool valid() const {
        return !this->homework.empty();
    }
    std::string getName() const {
        return this->name;
    }

    double grade() {
        double med = this->median();
        return 0.2 * this->mid + 0.4 * this->last + 0.4 * med; 
    }

    double median() {
        typedef std::vector<double>::size_type vec_sz;
        vec_sz size = this->homework.size();
        if (size == 0) {
            std::cout << std::endl;
            throw std::domain_error("blank of median");
        }
        std::sort(this->homework.begin(), this->homework.end());
        vec_sz med = size / 2;
        return (size % 2 != 0) ? this->homework[med] : (this->homework[med] + this->homework[med - 1]) / 2;
    }

    bool isFailed() {
        return this->grade() < 60;
    }
   
    std::istream& read(std::istream& is) {
        std::cout << "prease input student data [name, mid, last, [homeworks]]" << std::endl;
        is >> this->name >> this->mid >> this->last;
        this->read_hw(is, this->homework);
        return is;
    }
};

#endif

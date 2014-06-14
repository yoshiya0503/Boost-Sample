#include "student_info.h"

using namespace std;

bool compare(const Student_info& x, const Student_info& y) {
    return x.getName() < y.getName();
}

int main() {
    Student_info s;
    vector<Student_info> students;
    string::size_type maxlen = 0;

    std::cout << "prease input student data [name, mid, last, [homeworks]]" << std::endl;
    while (s.read(cin)) {
        maxlen = max(maxlen, s.getName().size());
        students.push_back(s);
    }
    sort(students.begin(), students.end(), compare);

    for (vector<Student_info>::size_type i = 0; i != students.size(); i++) {
        cout << students[i].getName() << endl;
        cout << "-----------------------------" << endl;
        try {
            cout << students[i].grade() << endl;
            cout << "------------------------------" << endl;
        } catch (domain_error e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}

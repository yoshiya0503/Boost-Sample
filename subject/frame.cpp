#include <iostream>
#include <vector>

using namespace std;

vector<string> frame(const vector<string>& v) {
    vector<string> ret;
    vector<string>::const_iterator it;
    for (it=v.begin(); it != v.end(); it++) {
        ret.push_back("* " + *it + " *");
    }
    return ret;
}

int main() {
    vector<string> a;
    a.push_back("jaawoef");
    a.push_back("jaawoef");
    a.push_back("jaawoef");
    a.push_back("jaawoef");
    vector<string> b = frame(a);
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << endl;
    }
}

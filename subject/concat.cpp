#include <vector>
#include <string>
#include <iostream>

using namespace std;

string concat(const vector<string>& v) {
    string s;
    vector<string>::const_iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        s += *it;
    }
    return s;
}

int main() {
    vector<string> v;
    v.push_back("awefaewf");
    v.push_back("awefaewf");
    v.push_back("awefaewf");
    v.push_back("awefaewf");
    v.push_back("awefaewf");
    v.push_back("awefaewf");
    v.push_back("awefaewf");

    cout << concat(v) << endl;
}

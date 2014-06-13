#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    map<int, string> m;
    m[0] = "a";
    m[1] = "b";
    m[2] = "c";
    map<int, string> n;
    //pair<int, string> n;
    //n[3] = "a";
    //vector<map<int, string> >n;
    vector<string> a;
    vector<string> b;

    copy(a.begin(), a.end(), back_inserter(b));
    copy(m.begin(), m.end(), back_inserter(n));
}

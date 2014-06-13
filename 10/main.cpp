#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int* p = &x;
    cout << *p << endl;
    *p = 10;
    cout << *p << endl;
    cout << x << endl;
}

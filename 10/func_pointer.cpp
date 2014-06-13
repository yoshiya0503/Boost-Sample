#include <iostream>

using namespace std;

int callback1(int a) {
    return 20;
};

int callback2(int b) {
    return 10;
}

int callback3(int c) {
    return c + 100;
}

void func(int (*a)(int)) {
    cout << (*a)(10) << endl;
}

int main() {
    int (*a)(int) = &callback1;
    func(callback1);
    func(callback2);
    func(callback3);
    func(*a);
}

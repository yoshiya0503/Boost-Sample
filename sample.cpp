#include <boost/lambda/lambda.hpp>
#include <boost/shared_ptr.hpp>
#include <iostream>
#include <vector>

class Test {
    private:
        int x;
        int y;
    public:
        Test(int, int);
        void print();
        int getX();
        int getY();
};

Test::Test(int x, int y) {
    this->x = x;
    this->y = y;
};

int Test::getX() {
    return this->x;
}
int Test::getY() {
    return this->y;
}

void Test::print() {
    std::cout << this->x << std::endl;
    std::cout << this->y << std::endl;
};

void callback(Test* o) {
    std::cout << o->getX() << std::endl;
    std::cout << o->getY() << std::endl;
}

void destroy(Test* o) {
    delete o;
}

int main() {

    Test* test1 = new Test(10, 100);
    Test* test2 = new Test(20, 200);

    boost::shared_ptr<Test> smart1(new Test(30, 300));
    boost::shared_ptr<Test> smart2(new Test(40, 400));

    std::vector<Test*> vec;
    std::vector<boost::shared_ptr<Test> > smart_vec;
    vec.push_back(test1);
    vec.push_back(test2);

    smart_vec.push_back(smart1);
    smart_vec.push_back(smart2);

    for_each(vec.begin(), vec.end(), callback);

    for_each(vec.begin(), vec.end(), destroy);

    vec.clear();
    return 0;
}

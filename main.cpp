#include <iostream>
using namespace std;

class Base {
public:
    virtual void foo() {
        cout << "Base::foo()" << endl;
    }
};

class Derived1 : public Base {
public:
    virtual void foo() override {
        cout << "Derived1::foo()" << endl;
    }
};

class Derived2 : protected Base {
public:
    virtual void foo() {
        cout << "Derived2::foo()" << endl;
    }
};

class Derived3 : private Base {
public:
    virtual void foo() {
        cout << "Derived3::foo()" << endl;
    }
};

int main() {
    Base b;
    Derived1 d1;
    Derived2 d2;
    Derived3 d3;

    b.foo();
    d1.foo();
    d2.foo();
    d3.foo();

    Base *pb = new Derived1();
    pb->foo();

    delete pb;
    return 0;
}

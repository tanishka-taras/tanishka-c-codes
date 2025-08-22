#include <iostream>
using namespace std;

class A {
public:
    int x, y;
    void getdata() {
        cout << "Enter the value of x and y: ";
        cin >> x >> y;
    }
};

class B : public A {
public:
    void sum() {
        cout << "The sum = " << x + y << endl;
    }
};

class C : public A {
public:
    void mul() {
        cout << "The mul = " << x * y << endl;
    }
};

class D : public A {
public:
    void div() {
        if (y != 0) {
            cout << "The div = " << x / y << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    B obj1;
    C obj2;
    D obj3;

    obj1.getdata();
    obj1.sum();

    obj2.getdata();
    obj2.mul();

    obj3.getdata();
    obj3.div();

    return 0;
}

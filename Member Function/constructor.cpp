#include <iostream>

class MyClass {
private:
    int x;
    int y;

public:
    // Default constructor
    MyClass() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    MyClass(int a, int b) {
        x = a;
        y = b;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        x = other.x;
        y = other.y;
    }

    void print() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    // Using default constructor
    MyClass obj1;
    std::cout << "Object 1 created using default constructor: ";
    obj1.print();

    // Using parameterized constructor
    MyClass obj2(5, 10);
    std::cout << "Object 2 created using parameterized constructor: ";
    obj2.print();

    // Using copy constructor
    MyClass obj3 = obj2;
    std::cout << "Object 3 created using copy constructor: ";
    obj3.print();

    return 0;
}

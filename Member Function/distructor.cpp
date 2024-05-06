#include <iostream>

class MyClass {
private:
    int* ptr;

public:
    // Constructor
    MyClass() {
        ptr = new int; // Allocate memory
        *ptr = 10;
        std::cout << "Constructor called\n";
    }

    // Destructor
    ~MyClass() {
        delete ptr; // Release memory
        std::cout << "Destructor called\n";
    }

    void print() {
        std::cout << "Value: " << *ptr << std::endl;
    }
};

int main() {
    {
        MyClass obj;
        obj.print();
    } // obj goes out of scope here and its destructor is called

    std::cout << "Object destroyed, exiting program\n";
    return 0;
} // End of program, obj's destructor is called again

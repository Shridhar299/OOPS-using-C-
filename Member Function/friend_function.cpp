#include <iostream>

class MyClass {
private:
    int secretNumber;

public:
    MyClass(int num) : secretNumber(num) {}

    // Declaration of friend function
    friend void printSecretNumber(const MyClass& obj);
};

// Definition of friend function
void printSecretNumber(const MyClass& obj) {
    // Accessing private member of MyClass
    std::cout << "The secret number is: " << obj.secretNumber << std::endl;
}

int main() {
    MyClass obj(42);

    // Call to the friend function
    printSecretNumber(obj);

    return 0;
}

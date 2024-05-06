#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        std::cout << "Animal makes a sound\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the makeSound function
    void makeSound() override {
        std::cout << "Dog barks\n";
    }
};

// Derived class
class Cat : public Animal {
public:
    // Overriding the makeSound function
    void makeSound() override {
        std::cout << "Cat meows\n";
    }
};

int main() {
    Animal* animalPtr;

    // Creating a Dog object
    Dog dog;
    animalPtr = &dog;
    animalPtr->makeSound(); // Calls Dog's makeSound

    // Creating a Cat object
    Cat cat;
    animalPtr = &cat;
    animalPtr->makeSound(); // Calls Cat's makeSound

    return 0;
}

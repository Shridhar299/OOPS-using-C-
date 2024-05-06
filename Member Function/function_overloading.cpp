#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int sum1 = add(2, 3);
    std::cout << "Sum of two integers: " << sum1 << std::endl;

    int sum2 = add(2, 3, 4);
    std::cout << "Sum of three integers: " << sum2 << std::endl;

    double sum3 = add(2.5, 3.5);
    std::cout << "Sum of two doubles: " << sum3 << std::endl;

    return 0;
}

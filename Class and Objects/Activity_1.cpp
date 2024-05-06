/* 1. Wrt a cpp program to create a class KLETECH employee with private data member
as a salary and public member functions as getsalary and setsalary. Read the salary at
compile time and print. */

#include <iostream>
using namespace std;

class Employee {
private:
    int salary;  // Private attribute
public:
    void setSalary(int s) {  // Setter
        salary = s;
    }
    int getSalary() {  // Getter
        return salary;
    }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}


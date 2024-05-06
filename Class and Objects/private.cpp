#include<iostream> 
using namespace std; 

class Circle 
{ 
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double compute_area() { 
        return 3.14 * radius * radius; 
    } 
}; 

int main() 
{ 
    Circle obj; 
    obj.setRadius(1.5); // Set the radius using a public member function
    cout << "Area is: " << obj.compute_area(); 
    return 0; 
}


#include<iostream>
using namespace std;
int main(){
	int a=5,b=3;
	cout<<" a=5  b=3"<<endl<<endl;
	cout << "Arithmetic Operators:" <<endl;
    cout << "a + b = " << a + b <<endl;
    cout << "a - b = " << a - b <<endl;
    cout << "a * b = " << a * b <<endl;
    cout << "a / b = " << a / b <<endl;
    cout << "a % b = " << a % b <<endl;
    
    // Logical operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" <<endl;
    cout << "x && y is " << (x && y) <<endl;
    cout << "x || y is " << (x || y) <<endl;
    cout << "!x is " << (!x) <<endl;
    
    //Bitwise operators
    cout << "\nBitwise Operators:" <<endl;
    cout<<"a & b = "<<(a&b)<<endl;
    cout<<"a | b = "<<(a|b)<<endl;
    cout<<"a ^ b = "<<(a^b)<<endl;
    cout<<"a << 2= "<<(a<<2)<<endl; // left shift binary: 10100
    cout<<"a >> 2= "<<(a>>2)<<endl; // Right shift binary: 001
    
    //Ternary operators
    cout << "\nTernary Operators:" <<endl;
    int max= a>b? a : b ;
    cout<<"max= "<<max<<endl;
    
    //Unary operators
    cout << "\nUnary Operators:" << endl;

    cout<<"pre increment= "<<(++a)<<endl;
	cout<<"post increment= "<<(a++)<<endl;
	cout<<"pre decrement= "<<(--b)<<endl;
	cout<<"post decrement= "<<(b--)<<endl;
	
	return 0;
    
}

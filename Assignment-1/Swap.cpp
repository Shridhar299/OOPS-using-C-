#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"two number after swaping"<<endl;
	cout<<a<<endl<<b;
	return 0;
}

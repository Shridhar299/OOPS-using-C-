#include<iostream>
using namespace std;
void check(int age)
{
	if(age>=18)
	{
		cout<<"Eligible to vote";
	}
	else
	cout<<"Not eligible";
}
int main()
{
	int age;
	cout<<"Enter the age of person"<<endl;
	cin>>age;
	check(age);
	return 0;
}

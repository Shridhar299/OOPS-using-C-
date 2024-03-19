#include<iostream>
using namespace std;
int main(){
	int a[20];
	int sum=0,i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	cout<<"sum= "<<sum<<endl;
	return 0;
}

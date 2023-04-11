#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the 1st ,2nd and 3rd number: ";
	cin>>a>>b>>c;
	if(a>b && a>c)
		cout<<" 1st number is largest number";
	else if (b>c && c>a)
		cout<<"2nd number is largest";
	else
		cout<<"3rd number is largest";
		return 0;
	}

#include<iostream>
using namespace std;
int main(){
	int fact=1,n,i;
	cout<<"enter the number: ";
	cin>>n;
	if (n<0)
	cout<<"error factorial of a negative number doesnt exist.";
	else 
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
	cout<<"factorial of the number is "<<fact;
	return 0;
}

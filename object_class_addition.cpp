#include<iostream>
#include<string.h>
using namespace std;
class arithematicoperation
{
	public:
int a,b,add,sub,mul;
float div;
string mystring;
};
int main(){
	arithematicoperation myobject;
	myobject.a;
	myobject.b;
	cout<<"enter the number: ";
	cin>>myobject.a>>myobject.b;
	myobject.add = a+b;
	myobject.sub=a-b;
	myobject.mul=a*b;
	myobject.div=a/b;
	cout<<"arithematic operation"<<"\n";
	cout<<myobject.add<<"\n"<<myobject.sub<<"\n"<<myobject.mul<<"\n"<<myobject.div;
	
	return 0;
}

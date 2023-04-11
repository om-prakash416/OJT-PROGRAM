#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
	public:
int height,base ;
float area=0;
};
int main(){
	myclass myobject;
	myobject.height;
	cout<<"enter the height: ";
	cin>>myobject.height;
	myobject.base;
	cout<<"enter the base: ";
	cin>>myobject.base;
	myobject.area=(0.5)*myobject.height*myobject.base;
	cout<<"area of triangle:"<<myobject.area<<"\n";
	return 0;
}

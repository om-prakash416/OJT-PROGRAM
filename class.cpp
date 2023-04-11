#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
	public:
int mynum ;
string mystring;
};
int main(){
	myclass myobject;
	myobject.mynum=15;
	myobject.mystring="OM PRAKASH";
	cout<<myobject.mynum<<"\n";
	cout<<myobject.mystring;
	return 0;
}

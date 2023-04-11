#include<iostream>
#include<string.h>
using namespace std;

class vahicle
{
	char name[20];
	public:
		void setname(char n[])
		{
		strcpy(name,n);
		}
		void getname(){
			cout<<"vehicle name:"<<name;
		}
};
class wheels:public vehicle
{
	int wheel;
	public:
		void setwheel(int w){
			wheel=w;
		}
		void getwheel(){
			cout<<"use wheel: "<<wheel;
		}
};
class car:public wheel
{
	int car;
	public:
		void setdetail(char n[],int wheel){
			detail=
		}
		 setdetail(name);
		setwheel(wheel);
		}
		void getdetail(){
			getname();
			getdetail();
			}
};
int main(){
	car op;
	op.setdetail();
	op.getdetail();
	return 0;
}

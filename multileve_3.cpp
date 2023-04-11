#include<iostream>
#include<string.h>
using namespace std;
class vehicle
{
	char name[20];
	public:
		void setname(char n[])
		{
			strcpy(name,n);
		}
		void getname()
		{
			cout<<"vahicle Name is: "<<name<<endl;
		}
};
class wheel: public vehicle
{
	int wheels;
	public:
	void setwheel(int w)
	{
		wheels=w;
	}
	 void getwheel()
	{
		cout<<"use wheels: "<<wheels<<endl;
	}
};
class car:public wheel
{
	int car;
	public:
		void setdetail(char name [],int wheels)
		{
		setname(name);
		setwheel(wheels);
	}
		void getdetail()
		{
			getname();
			getdetail();
		}
};
int main()
{
	car op;
	op.setdetail("TaTa",4);
	op.getdetail();
	return 0;
}

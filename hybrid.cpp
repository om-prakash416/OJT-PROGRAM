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

class wheels:public vehicle
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
class airbag
{
	int bag;
	public:
		void setbag(int b){
			bag =b;
		}
	 void getbag(){
	 	cout<<"no.of bag"<<bag;
	 }
};
class car:public wheels,public airbag
{
	int car;
	public:
		void setdetail( char name [],int wheels,int bag){
			setname(name);
			setwheels(wheels);
			setbag(bag);
		}
		void getdetail(){
			getname();
			getwheel();
			getbag();
		}
};
int main(){
	car op;
	op.setdetail("tata",6,4);
	op.getdetail();
	return 0;
}









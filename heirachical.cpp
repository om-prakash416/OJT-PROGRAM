#include<iostream>
using namespace std;
class shape
{
	public:
		void setbase(int b)
{
 base=b;
}
void setheight(int h){
	height =h;
}
protected:
	int base;
	int height;
};
class triangle:public shape
{ 
	public:
		int getarea(){
			return (0.5*height*base);
		}
	
};
class square:public shape
{
	public:
		int getarea()
		{
			return(height*base);
		}
};

int main(){
	square s;
	s.setbase (5);
	s.setheight(6);
	triangle p;
	p.setbase(6);
	p.setheight(6);
//	cout<<"enter height: ";
//	cin>>s.setheight();
//	cout<<"enter height: ";
//	cin>>s.setbase();
	cout<<"area of triangle : "<<p.getarea()<<"\n";
	cout<<"area of square: "<<s.getarea();
	return 0;
}

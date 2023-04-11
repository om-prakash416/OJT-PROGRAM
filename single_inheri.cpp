#include<iostream>
using namespace std;
class shape
{
	public:
		void setbase(int b);
};
{
 base=b;
}
void setheight(int h){
	height =h;
}
protected:
	int base;
	int height;
}
class square:public shape
{
	public:
		int getarea;
		{
			return(base*base);
		}
}
void main(){
	square s;
	s.setbase (z);
	s.setheight(z);
	cout<<"area of square: "<<s.getarea;
	
}

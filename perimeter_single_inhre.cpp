#include<iostream>
using namespace std;
	class shape
	{	public:
		void setlength(int l)
		{
				length=l;
		}
		void setbreadth(int b)
{
	breadth=b;
}
protected:
	int length;
	int breadth;
};
class rectangle_perimeter:public shape
{
	public:
		int getarea()
		{
			
			return(2*(length+breadth));
		}
};
int main(){
	rectangle_perimeter p;
	p.setlength(6);
	p.setbreadth(8);
	cout<<"perimeter of rectangle: "<<p.getarea();
	return 0;
}

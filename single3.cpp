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
	s.setbase (6);
	s.setheight(6);
	cout<<"area of square: "<<s.getarea();
	return 0;
}

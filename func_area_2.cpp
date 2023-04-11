#include<iostream>
using namespace std;
class triangle   //data encapsulation(hide data)
{
	public:
		int height ,base;
	void readdata()
{
	cout<<"enter the height: ";
	cin>>height;
	cout<<"enter the base: ";
	cin>>base;
}
void printresult();
}t;
void triangle::printresult(){
	float area;
	area=(0.5)*height*base;
	cout<<"area of triangle: "<<area;
}
int main(){
	t.height;
	t.base;
	t.printresult();
}


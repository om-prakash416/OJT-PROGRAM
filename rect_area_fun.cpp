#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length,breadth;
		void printarea();
}t;
void rectangle::printarea(){
	float area=length*breadth;
	cout<<"area of the rectangle: "<<area;
}
int main(){
	t.length=40;
	t.breadth=20;
	t.printarea();
}

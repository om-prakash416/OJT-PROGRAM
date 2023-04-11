#include<iostream>
using namespace std;
class triangle{
	public:
		int height,base;
//		float area;
		void printarea();	
}t;
void triangle::printarea(){
	float area=(0.50)*height*base;
	cout<<"area of the triangle:"<<area;
}
int main(){
	t.height;
	t.base;
	cout<<"enter the base and height: ";
	cin>>t.base>>t.height;
	t.printarea();
}


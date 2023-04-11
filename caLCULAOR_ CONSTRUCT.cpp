#include<iostream>
#include<conio.h>
using namespace std;
class calculator
{ 
	int  val1,val2;
	public:
	 calculator(){
		cout<<"enter the value1 and val2: ";
		cin>>val1>>val2;
	}
	void sum();
	void min();
};
void calculator :: sum(){
	cout<<"sum is:"<<(val1+val2);

	cout<<"minus is" <<(val1-val2);
}
int main(){
	calculator op;
	op.sum();
	op.min();
//	return 0;
}

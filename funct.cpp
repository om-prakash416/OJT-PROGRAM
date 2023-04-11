#include<iostream>
using namespace std;
class base
{
	public:
		void print(){
			cout<<"base function";
		}
};
class derived:public base
{
	public:
		void print(){
			cout<<"derived func";
		}
};
main(){
	derived op;
	op.print();
	return 0;
}


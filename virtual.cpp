#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print(){
			cout<<"base function"<<endl;
		}
			void show(){
				cout<<"show base class "<<endl;
			}
	
};
class derived:public base
{
	public:
		void print(){
			cout<<"derived func"<<endl;
		}
		void show(){
			cout<<"show derived class"<<endl;
		}
};
main(){
	base *b;
	derived op;
	b=&op;
	b->print();
	b->show();
	
	return 0;
}


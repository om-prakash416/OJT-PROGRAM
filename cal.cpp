#include<iostream>
using namespace std;//polimorphism

class calculator
{
	public:
		void add(int val1,int val2){
			cout<<"sum of the value: "<<(val1+val2)<<endl;
		}
		void add(int val1,int val2,int val3){
			cout<<"sum of three value: "<<(val1+val2+val3);
		}
	};
	int main(){
		calculator op;
		op.add(2,4);
		op.add(2,4,8);
		return 0;
	}

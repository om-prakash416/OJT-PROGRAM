#include<iostream>
#include<conio.h>
using namespace std;
class myclass
{
	private:
		int meter;
		friend int sqr(int v)
		{
		return v*v;	}
};
		int main(){
		
			cout<<"distance: "<<sqr(4);
			return 0;
	}

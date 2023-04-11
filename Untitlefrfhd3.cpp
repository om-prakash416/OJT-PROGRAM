#include<stdio.h>
int main(){
	int *p;
	int x=5;
	p=&x;
	printf("value of x is %d\n",x);
	printf("address of x is  %p\n",p);
	printf("value of x is %d",*p);
	return 0;
}

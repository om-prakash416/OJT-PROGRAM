#include<stdio.h>
int main(){
	int *y,x=2;
	y=&x;
//	int *a,b=5;
//	a=&b;
	printf("value of pointer is %d\n",*y);
	printf("address of pointer is %p\n",&y);
//	printf("value of pointer is %d\n",*a);
//	printf("address of pointer is %p",&a);
	
	return 0;
}

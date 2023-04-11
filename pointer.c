#include<stdio.h>
int main(){
	int *p, c=25;
	p=&c;
	printf("address of c is %p",*c);
	printf("value of c is %p",&c);
	return 0;
}

#include<stdio.h>
int main(){
	int y,x=5;
	x=&y;
	printf("value of pointer is %d",x);
	printf("address of pointer is %p",&y);
	return 0;
}

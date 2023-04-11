#include<stdio.h>
void swap(int* a, int* b);
//return ;
int main(){
	int a=5,b=10;
	swap(&a,&b);
	printf("a is %d\n",b);
	printf("b is %d",a);
	return 0;
}
void swap(int* a,int* b){
	int* temp;
	temp=a;
	a=b;
	b=temp;

//	int a;
//	int b;
//	a=a+b;
//	b=a-b;
//	a=a-b;
}





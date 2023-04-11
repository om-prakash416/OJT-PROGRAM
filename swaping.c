#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main(){
	int n1,n2;
	printf("enter the 1st number : ");
	scanf("%d",&n1);
	printf("enter the 2st number : ");
	scanf("%d",&n2);
	swap(n1,n2);
	getch();
}
	void swap(int a,int b){
		int temp;
		temp=a;
		a=b;
		b= temp;
	printf("after swapping the value is :%d\n",a);
	printf("after swapping the value is :%d",b);
	getch();
}
	

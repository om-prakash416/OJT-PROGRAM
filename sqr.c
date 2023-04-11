#include<stdio.h>
int sqr(int val);
int cub(int value);
	void main(){
		int num1;
		printf("enter the number : ");
		scanf("%d",&num1);
		printf("square of number is %d " ,sqr(num1));
		printf("cube of number is %d" ,cub(num1));
	getch();
}
	int sqr(int val)
	{
		return (val*val);
	}
int cub(int value){
	return (value*value*value);
}


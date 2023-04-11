#include<stdio.h>
int fact(int);
void main(){
	int n,f;
	printf("enter the number is: ");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of %d",f);
	return 0;
}
int fact(int n){
	if (n==0){
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else{
	return fact*n-1;
}
}

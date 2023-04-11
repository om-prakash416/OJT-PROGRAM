#include<stdio.h>
int main(){
	int n;
	printf("enter the year: ");
	scanf("%d",&n);
	if(n%4==0 && n%400)
	{
		printf("entered year is leap year");
	}
	else{
		printf("enterd year is not leap year");
	}
	return 0;
}

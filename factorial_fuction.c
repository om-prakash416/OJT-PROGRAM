#include<stdio.h>
#include<math.h>
int main() {
	printf("enter the number: ");
	printf("factorial of  is %d=%d",fact());
	return 0;;
}
int fact(){
	int n,i,fact=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		fact*=i;
	}
	
	return fact;
}

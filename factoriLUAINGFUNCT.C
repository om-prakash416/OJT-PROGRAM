#include<stdio.h>
#include<math.h>
int main() {
int fact,n;
	printf("enter the number: ");
	printf("\nfactorial of  is %d=%d",fact(n));
	return 0;
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

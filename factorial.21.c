#include<stdio.h>
#include<math.h>

int main(){
	int n,i,fact=1;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n<0)
	printf(" negative factorial exist");
	for(i=0;i<=n;++i)
	{
		fact*=i;
	}
		printf("factorial of  is %d=%d",n,fact);
	return 0;
}

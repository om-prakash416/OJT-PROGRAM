#include<stdio.h>
int main(){
	int i,n,sum;
	sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	i=0;
	while(i<=n){
		sum=sum+i;
	printf("sum of the number is:%d",sum);
	i++;
}
return 0;
}

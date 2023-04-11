#include<stdio.h>
#include<math.h>
int power(int n1,int n2);
void main(){
	int base,a,result;
	printf("enter the base number: ");
	scanf("%d",&base);
	printf("enter the power number: ");	
	scanf("%d",&a);
	result=power(base,a);
	printf("power given number =%d",result);
	return ;
}
int power(int base,int a)
{
	if(a!=0){
	
	return (base*power(base,a-1));
}
	else{
		return 1;
	}
}

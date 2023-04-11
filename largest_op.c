#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the 1st number: ");
	scanf("%d",&a);
		printf("enter the 2nd number: ");
		scanf("%d",&b);
			printf("enter the 3rd  number: ");
	scanf("%d",&c);
	if(a>b && b<c){
		printf("1st number is largest");
	}
	else if(b>a && b>c){
		printf("2nd number is largest");
	}
	else{
		printf("3rd number is largest");
	}
	return 0;
}

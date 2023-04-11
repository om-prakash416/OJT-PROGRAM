#include<stdio.h>
int main(){
	int n;

	printf("enter number");
	scanf("%d",&n);
	printf("square is %d",sqr(n));
}
//function prototypes
int sqr(int val){
	return val*val;
}

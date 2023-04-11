#include<stdio.h>
//by using pointer and function
void printarr(int *arr){
	printf("elements of arr are\n ");
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
}
void array(int arr[]){
	printf("elements of arr are\n");
	for(int i=0;i<5;i++){
	printf("%d\n",arr[i]);
}
}
int main(){
	int arr[5]={10,20,30,40,50};
	printarr(arr);
	array(arr);
	
return 0;	
	
}

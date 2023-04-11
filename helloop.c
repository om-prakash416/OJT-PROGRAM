#include<stdio.h>
#include<stdlib.h>

void main(){
	int i;
	FILE *fptr;
	fptr=f("number_fil.txt","w")
	if(ptr==NULL){
		printf("error oop!");
		exit(1);
	}
		printf("enter the number: ");
		scanf("%d",&i);
		fprintf(fptr,"%d",i);
		fclose(ptr);
//		printf("hello op!");
	return 0;
}

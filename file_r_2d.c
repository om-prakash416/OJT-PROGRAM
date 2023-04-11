#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	FILE*fptr;
	fptr=fopen("C:\Users\Student\Desktop\OP_OJT/number_fil.txt","r");
	if (fptr==NULL){
		printf("error oop!");
		exit(1);
	}
	fptintf(fptr,"%d",i);
	printf("value of=%d",i);
	fclose(fptr);
}

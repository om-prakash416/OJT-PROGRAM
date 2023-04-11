#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//structure with pointer with dynamic location
struct person{
	int rollno;
	char name[15];
};
void main(){
	struct person *ptr;
	int i,n;
	printf("enter the number of person: ");
	scanf("%d",&n);
	ptr=(struct person *)malloc(n*sizeof(struct person));
	for(i=0;i<n;i++){
		printf("enter roll number: ");
		scanf("%d",&(ptr+i)->rollno);
		printf("enter name: ");
		scanf("%s",&(ptr+i)->name);	
	}
	printf("displaying information \n");
	for(i=0;i<n;i++){
		printf(" roll number=%d\n name=%s\n",(ptr+i)->rollno,(ptr+i)->name);
	}
	
}

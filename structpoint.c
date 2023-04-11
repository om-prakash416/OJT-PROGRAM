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
	printf("\n enter the number of person: ");
	scanf("%d\n",&n);
	ptr=(struct person *)malloc(n*sizeof(struct person));
	for(i=0;i<n;i++){
		printf("enter roll number: ");
		scanf("%d\n",&(ptr+i)->rollno);
		printf("enter name: ");
		scanf("%s\n",&(ptr+i)->name);	
	}
	printf("displaying information");
	for(i=0;i<n;i++){
		printf("enter roll number=%d\n name=%s",(ptr+i)->rollno,(ptr+i)->name);
		
		
				}
	return 0;
}






#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{ 
int rollno;
char name[15];//declaration
	
}e1;
void main(){
	printf("enter the roll no: ");
	scanf("%d",&e1.rollno);
	printf("employee the name: ");
	scanf("%s",&e1.name);
	printf("employee the rollno:%d\n",e1.rollno);
	printf("employee the name:%s",e1.name);
}
void main(){
		struct employee e2;
	printf("enter the roll no: ");
	scanf("%d",&e2.rollno);
	printf("employee the name: ");
	scanf("%s",&e2.name);
	printf("employee the rollno:%d\n",e2.rollno);
	printf("employee the name:%s",e2.name);
	return 0;
}

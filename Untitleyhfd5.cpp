#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{ 
int rollno;
char name[15];
	
}e1[2];
	void get(struct employee e[]);
int main(){
	for(int i=0;i<2;i++){
		printf("enter the roll no: ");
		scanf("%d",&e1[i].rollno);
		printf("employee the name: ");
		scanf("%s",&e1[i].name);
	
	}
	get(e1);
	}
		void get(struct employee e[]){
		for(int i=0;i<2;i++){
		printf("employee the rollno:%d\n ",e1[i].rollno);
		printf(" employee the name:%s",e1[i].name);
		}
	}



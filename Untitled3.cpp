#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[20],name2[15];
	printf("enter the name : ");
	scanf("%s ",&name2);
	strcpy(name,name2);
	printf("the copy of string is %s",name2);
	return 0;
}

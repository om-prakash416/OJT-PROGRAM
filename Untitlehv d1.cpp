#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[10],name2[15];
	printf("enter the name : ");
	scanf("%s",&name);
	printf("enter the name : ");
	scanf("%s",&name2);

	printf(" strcat is %s",strcat(name,name2));
	return 0;
}


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[10],name2[15];
	printf("enter the name : ");
	scanf("%s",&name);
//	printf("enter the name : ");
//	scanf("%s",&name2);
//	printf(" strlwr is %s",strlwr(name));
//	printf(" UPPERCASE is %s\n",strupr(name));
	printf(" strrev is %s",strrev(name));
	return 0;
}


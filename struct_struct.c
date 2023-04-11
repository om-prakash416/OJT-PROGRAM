#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct address{
	char city[20];//NESTED
	int phone,pin;
};
struct employee{
	char name[20];
	struct address add;
};
void main(){
	struct employee e1;
	printf("enter the employee information\n");
	printf("enter the name: ");
	scanf("%s",&e1.name);
	printf("enter the city: ");
	scanf("%s",&e1.add.city);
	printf("enter the phone: ");
	scanf("%d",&e1.add.phone);
	printf("enter the pin: ");
	scanf("%d",&e1.add.pin);
	printf("displaying the employing information\n");
	printf("name %s\n",e1.name);
	printf("city %s\n",e1.add.city);
	printf("phone %d\n",e1.add.phone);
	printf("pin %d\n",e1.add.pin);
}



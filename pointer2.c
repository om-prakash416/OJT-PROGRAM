#include<stdio.h>
int main(){
	int age=22;
	int *ptr=&age;
	int _age=*ptr;
	printf("%d\n",_age);
	//address
	printf("%p\n",&age);
	printf("%p\n" ,ptr);
	printf("%p\n",&ptr);
	// data
	printf("%p\n",age);
	printf("%p\n" ,*ptr);
	printf("%p\n",&ptr);
	return 0;
}

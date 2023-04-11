#include<stdio.h>
int main(){
	char c;
	printf("enter the char: ");
	scanf("%c" ,&c);
	
	if((c>='a'&& c<='z') || (c>='A' && c<='Z')){
		printf("entered  alphabet is character");
	}
	else{
		printf("entered alphabet NOT character");
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *fp;
char c;
printf("entered data is\n");
fp=fopen("string_file.txt","r");
while((c=getc(fp))!=EOF)
{
	
	fprintf("%c",c);
	exit(1);
}
	fclose(fp);


}

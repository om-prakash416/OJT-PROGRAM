#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *fp;
char c;
printf("file handling with character\n");
fp=fopen("string_file.txt","w");
while((c=getchar())!=EOF)
{
	putc(c,fp);
	exit(1);
}
	fclose(fp);
//	fprintf(fp,"%c");
//	printf("value of n =%d",i);
}

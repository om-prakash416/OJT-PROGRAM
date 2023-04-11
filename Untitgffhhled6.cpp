#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
//	int arr[3]={10,20,30};
//	arr={10};
//	arr={20};//initionalization
//	arr={30};
	int arr[4][3]={(1,2,3),(4,5,6)};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++){
		printf("arr[%d][%d]\n",i,j,arr[i][j]);
	}
	}
	getch();
}

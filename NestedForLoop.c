#include<stdio.h>
void main(){
	int i , j ;
	for(i = 1 ;i <= 2 ; i++)
	{
		printf("Row = %d\n",i);
		for(j = 1 ;j <= 2 ; j++){
			printf("Col = %d ",j);
		}
		printf("\n");
	}
}

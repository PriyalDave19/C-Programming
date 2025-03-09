#include<stdio.h>
void main(){
	int i;
	for(i=1;i<=10;i++)
	{
		if(i == 4 || i==7 || i==9)
			continue;
		printf("%d\n",i);
	}
	printf("HELLO\n");
}

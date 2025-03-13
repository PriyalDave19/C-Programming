#include<stdio.h>
void main(){
	int a [3][3];
	int i,j;
	
	printf("Please Enter Elements in array:\n");
	for (i = 0 ;i < 3 ;i++){
		for(j = 0 ; j < 3 ; j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0 ;i < 3 ;i++){
		for(j = 0 ; j < 3 ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0 ;i < 3 ;i++){
		for(j = 0 ; j < 3 ; j++){
			if(a[i][j] % 2 == 0)
				printf("\n%d is Even\n",a[i][j]);
			else
				printf("%d is Odd\n",a[i][j]);
		}
		printf("\n");
	}
	
}

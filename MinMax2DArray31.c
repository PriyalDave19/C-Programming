#include<stdio.h>
void main(){

	int i , j ,a[3][3] , max ,min;

	printf("Please enter Elements in array:\n");
	
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	max = a[0][0];
	min = a[0][0];
	printf("\n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
			if(min >  a[i][j]){
				min = a[i][j];
			}
		}
	}
	printf("\n %d is max\n",max);
	printf("\n %d is min\n",min);
	
	

}

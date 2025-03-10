#include<stdio.h>
void main(){
	int a [7] = {55 , 75 , 2 , 1 ,58 , 96 ,100} , i,j , temp;
	
	printf("Before Swapping :\n");
	
	for(i = 0 ;i < 7 ;i++)
		printf("%d\t",a[i]);
	
	printf("\n\n");	
	
	for(i = 0 ;i<7 ; i++){
		for(j =0 ; j < 7 ;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("After Swapping :\n");
	
	for(i = 0 ;i < 7 ;i++)
		printf("%d\t",a[i]);
	
	
}

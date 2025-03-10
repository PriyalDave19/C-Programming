#include<stdio.h>
void main(){
	int i , a [5] = {41 , 51 , 21 ,22 ,65} , j ,temp;
	
	printf("Before Swapping :\n");
	
	for(i = 0 ;i < 5 ;i++)
		printf("%d\t",a[i]);
	
	printf("\n\n");	
	
	for(i = 0 ;i<5 ; i++){
		for(j = 0 ;j < 5 ; j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("After Swapping :\n");
	
	for(i = 0 ;i < 5 ;i++)
		printf("%d\t",a[i]);
}
	

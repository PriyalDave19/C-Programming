#include<stdio.h>
void max(int a[7],int max){
	int i;
	printf("Array List :\n");
	
	for(i = 0 ;i<7 ;i++)
		printf("%d\t",a[i]);
		
	max = a[0];
	
	for(i = 0 ; i<7 ; i++){
		if(a[i]>max)
			max = a[i];
	}
	
	printf("\n\n%d is maximum Element in Array\n",max);
}
void main(){
	printf("Maximum Element in Array USing Function:\n");
	int a[7] = {55 , 75 , 2 , 1 ,58 , 96 ,100} , m;
	max(a , m);
}

#include<stdio.h>
void main(){
	int i , a [5] = {41 , 51 , 21 ,22 ,65}, max ,min;
	
	for(i = 0 ;i < 5 ;i++)
		printf("%d\t",a[i]);
		
		max = a[0];
		min = a[0];
	printf("\n\n");	
	for(i = 0 ;i < 5 ;i++){
		if(a[i]>max)
			max = a[i];
		if(a[i]<min)
			min = a[i];
	}
	
	printf("%d is Maximum in array\n\n",max);
	printf("%d is Minimum in array\n",min);
	

printf("\n\n");printf("\n\n");printf("\n\n");
//==============================================================================================================

	int b[6] = {25 , 78 ,55 , 2 , 56,1};
	
	for(i = 0 ;i < 6 ;i++)
		printf("%d\t",b[i]);
	
	min = a[0];
		
	printf("\n\n");
	
	for(i = 0 ;i < 6 ;i++){
		if(b[i]<min)
			min = b[i];
	}
	printf("%d is minimum in array\n\n",min);
		
		
		
		
		
}

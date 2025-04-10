#include<stdio.h>
void main(){
	int i , j ,a[3][3] , b[3][3] ,c[3][3];

	printf("Please enter Elements in array:\n");
	
	printf("Enter elements for A Matrix : \n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Enter elements for B Matrix : \n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nPrinting Matrices A and B: \n");
	
	printf("A  : \t");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n\t");
	}
	
	printf("\n");
	printf("B  : \t");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n\t");
	}
	
	
	printf("\n");
	printf("Multiplication : \n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ;j++){
		c[i][j] = c[i][j]+ a[i][j]*b[i][j];
		}
		printf("\n\t");
	}




	
/*
 A =  [1 2]   00 01          B =    [1 2]  00 01          
 	  [4 5]	  10 11				    [4 5]  10 11
 	  
 	  
 	  
 	  AXB = [ (1*1)+(2*4)        (1*2)+(2*5)]            00*00 + 01*10         00*01 + 01*11
 	  		[ (4*1)+(5*4)        (4*2)+(5*5)]			10*00 +
 	  		
 	  		
 	 AXB =  [ 9     12]
 	  		[ 24    33]
 	  		
 	
 	  
 	  
 		

*/
	
}


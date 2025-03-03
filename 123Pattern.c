#include<stdio.h>
void main(){
	int i , j ,k = 1 , n ;
	
	printf("Enter a number of lines:");
    scanf("%d",&n);
    
	for(i = 1 ;i <= n ; i++){
		for(j = 1 ; j <= i ;j++){
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	
}

/*
 
 1 			 i = 1 ; j = 1
 2 3 		 i = 2 ; j = 1 ; j = 2
 4 5 6 		 i = 3 ; j = 1 , j = 2 ,j = 3;

*/

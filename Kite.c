#include<stdio.h>
void main(){
	
	int i , j , k, n;
	
	printf("Please Enter a Number of Lines");
    scanf("%d",&n);
    
    for(i = 1 ; i <=n ;i++){
    	for(k = n-i ; k >= 0 ;k--)
    		printf(" ");
    	for(j = 1 ; j <= i ;j++ )
			printf("* ");
		printf("\n");
	}
   	for(i = n-1 ; i >= 1 ; i--){
   		for(k = n-i ; k >= 0 ;k--)
    		printf(" ");
    	for(j = 1 ; j <= i ;j++ )
			printf("* ");
		printf("\n");
	   }
	
}

/*
  *                   i = 1   j = 1        k = 2 
 * *                  i = 2   j = 2			k = 1
* * *                 i = 3   j = 3			k = 0 
 * *                  i = 4   j= 2         k = 1
  *					  i = 5   j = 1        k = 2



*/

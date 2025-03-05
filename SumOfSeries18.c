#include<stdio.h>
void main(){
    int n ;
    float  i,sum = 0;
    
    printf("Please Enter a Num : \n");
    scanf("%d",&n);

   for(i=1 ; i <= n ;i++)
        sum += 1 / i ;
   
   printf("Sum Of Series = %f",sum);
}
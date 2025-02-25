#include<stdio.h>
void main(){

    int n ;
    printf("Please enter a number:\n");
    scanf("%d",&n);

    switch(n%2) // expression
    {
        case 0 :
        printf("Number = %d is Even\n",n);
        break;

        case 1 :
        printf("Number = %d is Odd\n",n);
        break;
        
    }
 }
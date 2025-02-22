#include<stdio.h>
void main(){
    int num ;
    printf("Please enter a number: \n");
    scanf("%d",&num);

    if(num%3 == 0)
        printf("%d is divisible by 3\n",num);
    if(num%5 == 0)
        printf("%d is divisible by 5\n",num);
    if(num%9  == 0)
        printf("%d is divisible by 9\n",num);
}
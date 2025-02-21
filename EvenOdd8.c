#include<stdio.h>
void main(){
    int num ;
    printf("enter a number:\n");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("num = %d is Even\n",num);
    else
        printf("num = %d is Odd\n",num);
}
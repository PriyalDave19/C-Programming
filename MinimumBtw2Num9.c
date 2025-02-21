#include<stdio.h>
void main(){
    int num1 , num2 ;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&num1,&num2);

    if(num1<num2)
        printf("num1 = %d is minimum\n",num1);
    else
        printf("num2 = %d is minimum\n",num2);
}
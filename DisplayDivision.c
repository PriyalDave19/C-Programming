#include<stdio.h>
void main(){
 
    int percent ;
    printf("Enter a percent: \n");
    scanf("%d",&percent);

    if(percent >= 60)
        printf("I st Division");
    else if(percent >= 45 && percent < 60)
        printf("II nd Division");
    else if(percent >= 33 && percent < 45)
        printf("III rd Division");
    else
        printf("FAIL");
}
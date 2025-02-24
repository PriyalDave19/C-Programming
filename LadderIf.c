#include<stdio.h>
void main(){

    int a , b ,c ;
    printf("Enter three Numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("a is maximum\n");
    else if(b>c)
        printf("b is maximum");
    else
        printf("c is maximum");
}
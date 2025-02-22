#include<stdio.h>
void main(){

    int a,b,c;

    printf("Enter a 3 numbers : \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("a is greater\n");
    if(b>a && b>c)
        printf("b is greater\n");
    if(c>a && c>b)
        printf("c is greater\n");
}
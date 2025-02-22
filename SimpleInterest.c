#include<stdio.h>
void main(){
    int p ;
    float r ,t, sI;

    printf("Please enter a Principle,Time,Rate for the Simple Interest : \n");
    scanf("%d%f%f",&p,&t,&r);

    sI = (p*r*t)/100;

    printf("Simple Interest = %f",sI);
}
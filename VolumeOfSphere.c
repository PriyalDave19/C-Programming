#include<stdio.h>
void main(){
    
    int r,volume;
    const float pie=3.14;
    printf("Please enter a Radius of Sphere:\n");
    scanf("%d",&r);

    volume = (4*pie*r*r*r)/3; 

    printf("Volume Of Sphere = %d",volume);
}
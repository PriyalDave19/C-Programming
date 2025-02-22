#include<stdio.h>
void main(){
    
    int l , b , h ,volume;
    printf("Please enter a length, breadth , height of Cuboid :\n");
    scanf("%d%d%d" , &l,&b,&h);

    volume = l*b*h; 

    printf("Volume Of Cuboid = %d",volume);
}
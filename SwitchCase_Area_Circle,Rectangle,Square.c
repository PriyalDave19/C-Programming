#include<stdio.h>
void main(){
    int ch,area_rectangle ,area_square,side,radius,l,w;

    const float pie = 3.14 ;
    float area_circle;

    printf("Enter 1. for Area Of Circle:\n");
    printf("Enter 2. for Area Of Square:\n");
    printf("Enter 3. for Area Of Rectangle:\n");
    printf("Please enter your choice:\n");
    scanf("%d",&ch);

    switch(ch){

        case 1:
        printf("Please Enter a radius for  area of circle:\n");
        scanf("%d",&radius);
        area_circle = pie * radius * radius;
        printf("Area Of Circle = %f\n",area_circle);
        break;

        case 2:
        printf("Please Enter a side for area of square:\n");
        scanf("%d",&side);
        area_square = side * side;
        printf("Area Of Square = %d\n",area_square);
        break;

        case 3:
        printf("Please Enter a length and width for area of rectangle:\n");
        scanf("%d%d",&l,&w);
        area_rectangle = l * w;
        printf("Area Of Rectangle = %d\n",area_rectangle);
        break;

        default:
        printf("Invalid Choice\n");
    }

}
#include<stdio.h>
void main(){

    int triangle , rectangle , l , w , b , h ;

    printf("Please enter a length and width of rectangle : \n");
    scanf("%d%d",&l,&w);

    rectangle = l*w;

    printf("Area Of Rectangle : %d \n",rectangle);

    printf("Please enter a Breadth and Heigth of triangle : \n");
    scanf("%d%d",&b,&h);

    triangle = (b*h*1)/2;

    printf("Area Of Triangle : %d \n",triangle);


//     int num ,rem1 , result1,rev1 ,rev2 , rem2 ,result2 ;

//     printf("Please enter a Number : \n");
//     scanf("%d",&num);  // 568

//     rem1 = num % 10; // 568 = 68
//     rev1 = num / 10; // 568 = 
//     result1 = (rem1*10)+rev1;    //65
// //568
//     rem2 = num % 100; // 568 = 68
//     rev2 = num / 100; // 568 = 5 
//     result2 = (rem2*100)+rev2; // 

//     printf("%d",result1);





}
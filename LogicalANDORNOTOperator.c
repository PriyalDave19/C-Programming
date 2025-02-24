#include<stdio.h>
void main(){

    printf("======AND Operator=====\n");
    // AND Operator......................................
    int per , age;
    printf("Please enter a Percentage and Age:\n");
    scanf("%d%d",&per,&age);

    if(per>=65 && age>=20 && age<=25)
        printf("You are eligible.\n");
    else
        printf("You are not eligible.\n");


//==============================================================================================================================================
    // OR Operator.......................................

    printf("======OR Operator=====\n");
    int percent , experience;
    printf("Please enter a Percentage and Experience :\n");
    scanf("%d%d",&percent,&experience);

    if (percent >= 65 || experience>=1)
        printf("You are eligible\n");
    else
        printf("You are not eligible.\n");
    

    

    //==============================================================================================================================================
    // NOT Operator.......................................

    printf("======NOT Operator=====\n");

    printf("Please enter a age:\n");
    scanf("%d",&age);


    if(!(age >= 18))
        printf("You are not Eligible\n");
    else
        printf("You are eligible\n");
}
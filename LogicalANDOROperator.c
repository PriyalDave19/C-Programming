#include<stdio.h>
void main(){

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

    int percent , experience;
    printf("Please enter a Percentage and Experience :\n");
    scanf("%d%d",&percent,&experience);

    if (percent >= 65 || experience>=1)
        printf("You are eligible\n");
    else
        printf("You are not eligible.\n");
    

}
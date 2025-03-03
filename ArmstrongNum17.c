#include<stdio.h>
void main(){
    int n , res = 0 ,rem ,temp;
    printf("Please Enter a 3 Digit Number: \n");
    scanf("%d",&n);
    temp = n;

    while(n != 0){
        rem = n%10;
        res = (rem*rem*rem)+res;
        n = n/10;
    }
    if(temp == res)
        printf("Armstrong Number");
    else
        printf("Not A Armstrong Number");



        printf("Please Enter a 4 Digit Number: \n");
        scanf("%d",&n);
        temp = n;
        res = 0;
        
        while(n != 0){
            rem = n%10;
            res = (rem*rem*rem*rem)+res;
            n = n/10;
        }
        if(temp == res)
            printf("Armstrong Number");
        else
            printf("Not A Armstrong Number");

}
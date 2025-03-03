#include<stdio.h>
void main(){
    int i , j, n;

    printf("Enter a number of lines:");
    scanf("%d",&n);

    for ( i = n; i >= 1 ; i--)                         
    {
        for (j = 1; j <= i; j++)
        {
        //	printf("%d",j);
        //	printf("%d",i);
         	printf("*");
        }
        printf("\n");
        
    }
    
}

/*

* * *      i = 3 ; j = 1 ; j=2 ; j =3
* *        i = 2 ; j = 1 ; j = 2
*          i = 1 ; j = 1 

*/

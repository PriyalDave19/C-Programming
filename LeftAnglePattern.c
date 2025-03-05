#include<stdio.h>
void main(){
    int i ,j, n;
    printf("Please Enter a Number of Lines");
    scanf("%d",&n);

    for(i=1 ; i <= n ; i++){
        for(int k = n-i ; k >= 0 ; k--){
            printf(" ");
        }
        for(j = 1 ; j <= i ;j++){
               printf("*");
            //  printf("%d",i);
            // printf("%d",j);
        }
        printf("\n");
    }

}
/*

    *            i =1    k = 2    j = 1
  * *            i =2    k =1     j = 2 
* * *            i =3    k =0       j=3


*/

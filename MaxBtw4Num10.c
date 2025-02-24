#include<Stdio.h>
void main(){
    int n1 , n2, n3 , n4 ;

    printf("Please enter 4 numbers:\n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    if(n1 > n2 && n1 >n3 && n1>n4)
        printf("n1=%d is Maximum\n",n1);
    else if(n2 > n3 && n2 > n4)
        printf("n2=%d is Maximum\n",n2);
    else if(n3 > n4)
        printf("n3=%d is Maximum\n",n3);
    else
        printf("n4=%d is Maximum\n",n4);
}
#include<Stdio.h>
void main(){
    int num ;

    printf("Please enter number:\n");
    scanf("%d",&num);

    if(num == 0)
        printf("The Number = %d (Zero)\n",num);
    else if(num < 0)
    printf("The Number = %d (Negative)\n",num); 
    else
    printf("The Number = %d (Positive)\n",num);

}
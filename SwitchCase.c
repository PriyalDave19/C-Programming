#include<stdio.h>
void main(){

    int ch, c,a,b;
    printf("Press 1 for Sum\n");
    printf("Press 2 for Sub\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("Press 5 for Modulus\n");
    printf("Please enter your choice:\n");
    scanf("%d",&ch);

    // printf("Please enter 2 numbers for Calculation\n");
    // scanf("%d%d",&a,&b);

    switch(ch){

        case 1 :
            printf("Please enter 2 numbers for Calculation\n");
            scanf("%d%d",&a,&b);

            c = a+b;
            printf("Addition = %d\n",c);
            break;

        case 2 :

            printf("Please enter 2 numbers for Calculation\n");
            scanf("%d%d",&a,&b);
    
            c = a-b;
            printf("Substration = %d\n",c);
            break;

        case 3 :
            printf("Please enter 2 numbers for Calculation\n");
            scanf("%d%d",&a,&b);
            c = a*b;
            printf("Multiplication = %d\n",c);
            break;

        case 4 :
            printf("Please enter 2 numbers for Calculation\n");
            scanf("%d%d",&a,&b);
            c = a/b;
            printf("Division = %d\n",c);
            break;
        
        case 5 :
            printf("Please enter 2 numbers for Calculation\n");
            scanf("%d%d",&a,&b);
            c = a%b;
            printf("Modulus = %d\n",c);
            break;

        default :
            printf("Invalid choice\n");
        
    }
}
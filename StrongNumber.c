#include<stdio.h>
void main(){
	int num , i , fact = 1 ,temp ,rem,strong = 0;
	printf("Enter Number = ");
 	scanf("%d",&num);
	temp = num;
	while(num != 0){
		rem = num%10;
		num = num /10;
		printf(" rem = %d\n",rem);
		for(i = rem ; i >= 1 ; i--)
	    {
			fact *= i;
		}
		printf("Fact number = %d\n",fact);
		strong += fact;
		fact = 1;
	}
		
	
	if(strong == temp){
		printf("Strong number = %d",strong);
	}else{
		printf("Not a Strong number = %d",strong);
	}
	
}

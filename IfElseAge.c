#include<stdio.h>
void main(){
	int num1 , num2 ;
	
	printf("enter a two num:\n");
	scanf("%d%d",&num1,&num2);
	printf("num1 is %d \nnum2 is %d\n",num1,num2);
	
	if(num1%num2 == 0){
		printf("Number is fully divisible");
	}
	else{
		printf("Number is not divisible");
	}
}

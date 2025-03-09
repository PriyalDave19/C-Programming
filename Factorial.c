#include<stdio.h>
void main(){
	int i , n ,fact=1;
	printf("Please enter any number :\n");
	scanf("%d",&n);
	for(i = n ;i >= 1; i--)
		fact*=i;  // t = 3,t = 3*2=6,t=6*1=6
	printf("Factorial of %d = %d",n,fact);	
}



// 3! = 3*2*1 = 6

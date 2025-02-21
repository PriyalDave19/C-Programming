#include<stdio.h>
void main(){
	
	int a = 5 , b=7 ,c ;
	printf("Before Swapping \na = %d\tb = %d \n\n",a,b);
	c = a;
	a = b;
	b = c ;
	
	printf("After Swapping \na = %d\tb = %d \n\n",a,b);
}

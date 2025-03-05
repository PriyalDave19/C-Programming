#include<stdio.h>
void main(){
	int a = 2 , *ptr;
	
	ptr = &a;
	
	printf("Value of a  = %d\n",a);
	printf("Address of a = %p\n",&a);
	printf("Value of a by p = %d\n",*ptr);
	printf("Address of a by p = %p\n",ptr);
}

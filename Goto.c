#include<stdio.h>
 main(){
	int n ;
	printf("Please enter a number\n");
	scanf("%d",&n);
	
	if (n%2 == 0)
		goto even;
	else
		goto odd;
	
	even :
		printf("this is even num\n");
		return 0;
	odd :
		printf("this is odd num\n");
		return 0;
}

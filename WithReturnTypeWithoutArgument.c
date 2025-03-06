#include<stdio.h>

int demo();
int findmax();
int demo1(int n);
float circle(float pie , float r);
void main(){
	/* int result = demo();
	printf("Result = %d\n",result);	*/
	printf("Result = %d\n\n",demo());
	
	printf("Max Number = %d\n\n",findmax());

	printf("Result = %d\n\n",demo1(5));
	
	printf("Area of Circle = %f\n\n\n",circle(3.14,2.5));
}

int demo(){
	int n;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	return n*n;
}

int findmax(){
	int x,y;
	printf("Please enter 2 number:\n");
 	scanf("%d%d",&x,&y);
	
	if(x>y)
		return x;
	else
		return y;
}

int demo1(int n){
	
	return n*n;
}

float circle(float pie , float r){
	
	return pie*r*r;
}



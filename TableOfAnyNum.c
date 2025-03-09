#include<stdio.h>
void main(){
	
	int n , i,table;
	
	printf("Please enter any number :\n");
	scanf("%d",&n);
	table = n;
	printf("Table of %d : \n",n);
	
	for(i = 1 ; i <= 10 ;i++)
	 	printf("%d X %d = %d\n",n,i,n*i);
		
}

//2 4 6 8 10 12 14 16 18 20 
//i*n = 1*2 =2
//i*n = 2*2=4
//i*n = 3*2=6
//i*n = 4*2=8
//i*n = 5*2=10
//i*n = 6*2=12
//i*n = 7*2=14
//i*n = 8*2=16

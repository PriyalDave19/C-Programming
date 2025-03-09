#include<stdio.h>
void main(){
	int i,n,flag = 0; // flag = 0 denotes Not a Prime num
	
	printf("Please Enter a Number :\n");
	scanf("%d",&n);
	
	for(i=1 ; i<= n ; i++)
	{
		if(n%i == 0)
		{
			flag++;        // flag = 1 , 2  denotes a Prime num
							// flag = 1 , 2 ,3...n denotes a Not Prime num
		}
		
		// 5%1 = 0   ->  True
		// 5%2 = 0	 ->  false
		// 5%3 = 0   ->  false
		// 5%4 = 0   ->  false
		// 5%5 = 0   ->  True
		// flag = 2
	}
	if(flag == 2)
		printf("%d is Prime Number",n);
	else
		printf("%d is Not Prime Number",n);
}


// Prime Number - Jo KHud Se Fully Divide Ho Aur 1 se toh ByDefault hota hi h 
 
//  1 = 1%1 =0
//  2%2 =0				---------->>>>> prime Num
//  3%2 = 1 , 3%3 =0			---------->>>>> prime Num
//  4%2 = 0 ; 4%3= 1; 4%4 = 0	---------->>>>> Not a prime Num
//  5%2 = 1 ; 5%3 = 2 ;5%4 = 1;5%5 = 0

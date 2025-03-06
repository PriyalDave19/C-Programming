#include<stdio.h>
void main(){
	int fact = 1 ,sum = 0 , n,j ,i;
	
	printf("Please Enter any number:\n");
	scanf("%d",&n);             // 3 
	
	for(j=1 ; j <=n ;j++){              	 // 1 <= 3 , 2 <= 3 
		fact = 1;
		for(i = j ; i >= 1 ; i--){          //3 >=1 ,  2>=1 ,1>=1
		fact *= i;   						// fact = 3*1 -> 3*2 -> 6*1 -> 6  //  fact = 2*1 = 2 = 2*1 = 2 // fact = 1
	}
		sum += fact;						// sum = 6 --> 6+2  --> 8 + 1 = 9
	}

	printf("factorial of %d = %d\n",n,fact);
	printf("sum of all factorial numbers is %d",sum);
	
	
}


//
//	1! = 1 					
//	2! = 2*1 = 2
//	3! = 3*2*1=6
//	4! = 4*3*2*1=24
//	5! = 5*4*3*2*1=120 


//   i/p = 3 ----->  3*2*1 + 2*1 + 1 = 6+2 = 8




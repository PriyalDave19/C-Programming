#include<stdio.h>
void main(){
	int num = 654 , rem1 , rem2 , reverse , div1 , div2;
	
	rem1 = num % 100;  // 54
	div1 = num / 100;  // 6
	
	rem2 = rem1 % 10;   // 4
	div2 = rem1 / 10;	// 5
	
	printf("rem1 = %d , rem2 = %d , div1=%d , div2=%d\n",rem1,rem2,div1,div2);
	
	reverse = (rem2*100)+(div2*10)+div1;  
	
	printf("Reverse of %d is %d",num, reverse);
	
}

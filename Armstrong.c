// ARMSTRONG NUMBER : 371 , 1634 , 370.....

#include<stdio.h>
void main(){
	int n = 153 , res=0 , mod;
	int temp = n;
	
	while(n != 0){
		mod = n % 10;
		res = (mod*mod*mod)+res;
		n = n/10;
	}

	if(res == temp)
		printf("number is Armstrong");
	else
		printf("Number is not armstrong");
}

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



// #include<stdio.h>
// void main(){
//     int n = 153 , rem , res = 0 ,temp;
//     temp = n;
//     while(n > 0){
//         rem = n % 10 ;
//         res = (rem*rem*rem)+res; 
//         n = n / 10;
//     }
//     if(temp == res){
//         printf("Armstrong Number");
//     }else{
//         printf("Not a Armstrong Number");
//     }
// }

// 1 5 3
// 1 + 5 + 3
//  1*1*1 + 5*5*5 + 3*3*3 = 1 + 125 + 27 = 153 ...

// 0 1 1 2 3 5 ... n 

#include<stdio.h>
void main(){

 	int a=0 ,b=1 , c ,i ,n;
 	
 	printf("Please Enter a Number of Lines");
    scanf("%d",&n);
    
    
 	
	printf("%d ",a);
	printf("%d ",b);

 	for(i = 1 ; i <= n ;i++){
		c = a+b;
		printf("%d ",c);
		a = b;
		b = c;
		
	 }

}
/*

a = 0
b = 1
c = a+b -> 1 
0 1 1 

a = b => a = 1
b = c => b = 1
c = a+b -> 1+1 = > 2 
0 1 1 2

a = b => a = 1
b = c => b = 2
c = a+b -> 1+2 = > 3 
0 1 1 2 3

a = b => a = 2
b = c => b = 3
c = a+b -> 2+3 = > 5
0 1 1 2 3 5

a = b => a = 3
b = c => b = 5
c = a+b -> 3+5 = > 8 
0 1 1 2 3 5 8 

a = b => a = 5
b = c => b = 8
c = a+b -> 5+8 => 12  
0 1 1 2 3 5 8 13




*/

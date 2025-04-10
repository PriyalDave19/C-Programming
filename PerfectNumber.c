#include<stdio.h>
void main(){
	int num , i ,temp,perfect = 0;
	
	printf("Enter Number = ");
 	scanf("%d",&num);
	
	temp = num;
	

		for(i = 1 ; i < num ; i++)
	    {
			if(num%i == 0){
				printf("Divisible by= %d\n",i);
				perfect += i;
			}
			
			
		}
	
		
	
	if(perfect == temp){
		printf("Perfect number = %d",perfect);
	}else{
		printf("Not a Perfect number = %d",perfect);
	}
	
}

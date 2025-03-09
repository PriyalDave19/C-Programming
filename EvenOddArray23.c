#include<stdio.h>
void main(){
	int a[15] , i ;
	
	printf("Please Enter Elements:\n");
	for(i=0;i<15;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0 ; i<15 ;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	for(i = 0 ; i<15 ;i++){
			if(a[i]%2 == 0)
			printf("Even Number = %d\n",a[i]);
	}
	for(i = 0 ; i<15 ;i++){
		if(a[i]%2 != 0)
			printf("Odd Number = %d\n",a[i]);
	}
		
}

#include<stdio.h>
void main(){
	int i ,p=1, a[5] = {10 , 20 , 30 , 40 , 50};
	
	for(i = 0 ; i<5 ;i++){
		p *= a[i] ;
	}
	printf("Product of Array = %d\n",p);
}

#include<stdio.h>
int max(int a[7],int max){
	printf("Array List :\n");
	int i;
	for(i = 0 ;i<7 ;i++)
		printf("%d\t",a[i]);
	
	max = a[0];
	
	for(i = 0 ; i< 7 ; i++){
		if(a[i]>max)
			max= a[i];
	}
	return max;

}
void main(){
	int a[7] =  {55 , 75 , 2 , 1 ,58 , 96 ,100} , m;
	
	printf("\n\n%d is Maximum\n",max(a,m));
}

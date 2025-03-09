#include<stdio.h>
void main(){
	int i,s=0,a[5] = {10,20,30,40,50};

	for(i = 0 ; i<5 ;i++)
		s += a[i];
	printf("%d\n",s);
}

#include<stdio.h>
struct product{
	int code; 
	float price;
	char name[10];
};
void main(){
	struct product p[3];
	int i;
	for(i = 0; i<3 ;i++){
		printf("Enter %d th code",i+1);
		scanf("%d",&p[i].code);
		printf("Enter %d th price",i+1);
		scanf("%f",&p[i].price);
	}

	printf("Display Structure elements: \n");

	for(i = 0; i<3 ;i++){
		printf(" Code = %d",p[i].code);
		printnf(" price = %f",p[i].price);
	}
	
	
}

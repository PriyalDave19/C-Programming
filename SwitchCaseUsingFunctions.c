#include<stdio.h>
void circle();
void rectangle();
void Leap_Year();
void Table();
void Factorial();
void Fibonacci();
void Digit_Sum();
void Series_sum();
void Prime_Num();
void Even_Num();
void Armstrong();
void Square();
void SwapWithout();
void SwapWith();
void Triangle();
void Simple_Interest();
void Temp_Conversion();
void Sum_First_Last_Digit();
void Pallindrome();
void Pattern1();

void main(){
	
	int ch;
	
	printf("Enter 1 for Area Of Circle :\nEnter 2 for Area Of Rectangle :\nEnter 3 for Leap Year :\nEnter 4 for Table :\nEnter 5 for Factorial :\nEnter 6  for Fibonacci Series :\n");
	printf("Enter 7 for Sum Of digits of a Number :\nEnter 8 for Sum of Series (1/1+1/2+1/3...1/n) :\nEnter 9 for prime number :\nEnter 10 for even number :\nEnter 11 for Calculate Armstrong Number :\n");
	printf("Enter 12 for Calculate Square :\nEnter 13 for Swap without use third Variable :\nEnter 14 for Swap with use third Variable :\nEnter 15 for Area of Triangle :\nEnter 16 for Calculate Simple Interest :\n");
	printf("Enter 17 for Calculate Temperature Conversion Celcius to Fehrenheit :\nEnter 18 for Calculate Sum of First and Last digit :\n");
	printf("Enter 19 for Calculate Pallindrome Number :\n\nEnter 11 for Pattern1 :\n*\n**\n***\n");
	
	printf("Please Enter Your Choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1 :
		{
			circle();
			break;
		}
		case 2 :
		{
			rectangle();
		}
		case 3 :
		{
			Leap_Year();
		}
		case 4 :
		{
			Table();
		}
		case 5 :
		{
			Factorial();
		}
		case 6 :
		{
			Fibonacci();
		}
		case 7 :
		{
			Digit_Sum();

		}
		case 8 :
		{
			Series_sum();
		}
		case 9 :
		{
			Prime_Num();

		}
		case 10 :
		{
			Even_Num();

		}
		case 11 :
		{
			 Armstrong();

		}
		case 12 :
		{
		 	 Square();

		}
		case 13 :
		{
			 SwapWithout();

		}
		case 14 :
		{
			SwapWith();

		}
		case 15 :
		{
			Triangle();

		}
		case 16 :
		{
			 Simple_Interest();

		}
		case 17 :
		{
			Temp_Conversion();
		}
		case 18 :
		{
			Sum_First_Last_Digit();
		}
		case 19 :
		{
			Pallindrome();
		}
		case 20:
		{
			Pattern1();
		}
		default:
			printf("Invalid Choice");
	}
}



void circle(){
	
	printf("Area Of Circle \n");
	float r ,area;
	
	printf("Enter a Radius of Circle =\n");
	scanf("%f",&r);
	
	area = 3.14*r*r;
	
	printf("Area Of Circle = %f\n",area);
		
}

void rectangle(){
	printf("Area Of Rectangle \n");
	float l,w  ,area;
	
	printf("Enter a Radius of Circle =\n");
	scanf("%f%f",&l,&w);
	
	area = l*w;
	
	printf("Area Of Rectangle = %f\n",area);
	
}
void Leap_Year(){
	printf("Leap Year :\n");
	int year;
	
	printf("Enter any year =\n");
	scanf("%d",&year);
	
	if(year%400 == 0 && year%4 == 0 || year%100 == 0)
		printf("Year = %d is Leap Year\n",year);
	else
		printf("Year = %d is not Leap Year\n",year);
}

void Table(){
	printf("Table of Any Number :\n");
	int n,i,table;
	
	printf("Enter any Number =\n");
	scanf("%d",&n);
	
	for ( i = 1 ;i <=10 ;i++)
		table = i*n;
	printf("Table of %d = \n%d X %d = %d" ,n,n,i,table);	
}

void Factorial(){

}
void Fibonacci(){

}
void Digit_Sum(){

}
void Series_sum(){

}
void Prime_Num(){

}
void Even_Num(){

}
void Armstrong(){

}
void Square(){

}
void SwapWithout(){

}
void SwapWith(){

}
void Triangle(){

}
void Simple_Interest(){

}
void Temp_Conversion(){

}
void Sum_First_Last_Digit(){

}
void Pallindrome(){

	int n , temp,rem , res=0;
	printf("Please Enter Any Number : \n");
	scanf("%d",&n);

	n = temp;

	while(n != 0){ // 1221
		rem = n%10;  // 1
		n = n/10;    // 122
		res =  rem    
	}
	

	// 1221

}
void Pattern1(){

}


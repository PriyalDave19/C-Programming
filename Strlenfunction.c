//prg for string library functions 
//strlen() - to count length of string
#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int n;
	printf("enter your name");
	gets(name); 
	n=strlen(name);
	printf("string length =%d\n",n);
}


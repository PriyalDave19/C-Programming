//prg for string library functions
#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	printf("enter your name");
	gets(name); //for input data
//for lowercase to uppercase use function strupr()
	printf("%s\n",strupr(name));

//for uppercase to lowercase use function strlwr()
	printf("%s",strlwr(name));
	
}


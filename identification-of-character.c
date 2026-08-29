#include<stdio.h>
int main ()
{
	char a;
	
	printf("enter character :");
	scanf ("%c",&a);
	
	if(a<=47)
	printf("symbol");
	else if(a<=57)
	printf("digit");
	else if(a<=64)
	printf("symbol");
	else if(a<=90)
	printf("capital alphabet");
	else if(a<=96)
	printf("symbol");
	else if(a<=122)
	printf("small alphabet");
	else 
	printf("symbol");
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	printf("enter the third number");
	scanf("%d",&c);
	
	printf(a>b?a>c?"a is max":"c is max":b>c?"b is max":"c is max");
	
	return 0;
}

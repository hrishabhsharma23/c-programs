#include<stdio.h>
int main ()
{
	int a=10,b=5,c=2;
	int d=a>10&&++b;
	int e=a++>10||b++;
	int f=++a&&++b&&++c;
	
	printf("%d,%d,%d,%d,%d,%d,",a,b,c,d,e,f);
	return 0;
}

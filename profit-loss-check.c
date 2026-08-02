#include<stdio.h>
int main()
{
	int s,p;
	printf ("enter the sales amount");
	scanf("%d",&s);
	printf("enter the purchase amount");
	scanf("%d",&p);
		
	printf(s<=p?"loss":"profit");
	
	return 0;
	
}

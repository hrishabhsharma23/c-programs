#include<stdio.h>
int main ()
{
	int a1,a2,a3,sum;
	printf("enter first angle");
	scanf("%d",&a1);
	printf("enter second angle");
	scanf("%d",&a2);
	printf("enter third angle");
	scanf("%d",&a3);
	
	sum=a1+a2+a3;
	printf(sum==180?"valid triangle":"not valid triangle");
	return 0;
}


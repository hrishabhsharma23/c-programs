#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the integer");
	scanf("%d",&n);
	
	printf(" prime factors of %d are ",n);
	i=2;
	while (n>1)
	{if (n%i==0)
	{printf ("%d",i);
	    n=n/i;
	}
	else 
	i++;
	}
	
	return 0;
}

#include<stdio.h>
int main ()
{
	int n,div=0,i;
	printf ("enter the integer");
	scanf("%d",&n);
	i=1;
	while (i<=n)
	{if (n%i==0)
	  { div ++;
	  }
	  i++;
	}
	if(div>2)
	printf("%d is not prime",n);
	
	else 
	printf ("%d is prime",n);
	
	return 0;
}

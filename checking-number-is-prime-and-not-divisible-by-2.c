#include<stdio.h>
int main()
{
	int n,m=0,i,r;
	printf("enter number :");
	scanf("%d",&n);
	
	if(n%2!=0)
	{   i=1;
	    while(i<=n)
	    {
	    	r=n%i;
	    	m=m+r;
	    	i++;}
	    if(m>n+1)
	    	printf("%d is not prime",n);
	    else
	    	printf(" prime");
					
	}

	else 
	printf("number is even loop chalane ko mana kiya h ");
	
	return 0;
}

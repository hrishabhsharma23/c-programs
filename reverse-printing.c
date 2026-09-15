#include<stdio.h>
int main()
{
	int n,m,r;
	printf("enter number :");
	scanf("%d",&n);
	
	if(n>=0)
	{
		while(n!=0)
		{ m=n%10;
		  r=r*10+m;
		  n=n/10;
		 
		 
		}
			printf("reverse is %d",r);
	}

	else 
	printf("invalid number");
	
	return 0;
}

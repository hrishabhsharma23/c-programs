#include<stdio.h>
int main()
{
	int n,i,f;
	printf("enter number :");
	scanf("%d",&n);
	
	if(n>=0&&n<13)
	{    i=1;
	     f=1;
		while(i<=n)
		{ f=f*i;
		  i++;
		  
		}
			printf("factorial is %d",f);
	}

	else 
	printf("invalid number");
	
	return 0;
}

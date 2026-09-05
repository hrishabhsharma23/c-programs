#include<stdio.h>
int main()
{
	int y,g,q;
	
	printf("enter gender :");
	scanf ("%d",&g);
	printf("enter qualification :");
	scanf ("%d",&q);
	printf("enter number of year experience :");
	scanf ("%d",&y);
	
	if(g==1)
	{
		if(y>=10&&q==1)
		printf("salary is 15000");
	    else	if(y>=10&&q==2)
		printf("salary is 10000");
		else	if(y<10&&q==1)
		printf("salary is 10000");
	    else	if(y<10&&q==2)
		printf("salary is 7000");
	}
	else
	if(g==2)
	{
		if(y>=10&&q==1)
		printf("salary is 12000");
	    else	if(y>=10&&q==2)
		printf("salary is 9000");
		else	if(y<10&&q==1)
		printf("salary is 10000");
		else	if(y<10&&q==2)
		printf("salary is 6000");
	}
	return 0;
}

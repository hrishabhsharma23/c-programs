#include<stdio.h>
int main()
{
	int g,y,q;
	printf("enter gender,years of experience,qualification : \n");
	scanf("%d""%d""%d",&g,&y,&q);
	
	if(g==1)
	{
		if(y>=10)
			if(q==1)
			printf("salary is 15000");
			else
			printf("salary is 10000");
		else if (q==1)
		printf("salary is 10000");
		     else 
			 printf("salary is 7000");	
	}
else	if(g==2)
	{
		if(y>=10)
			if(q==1)
			printf("salary is 12000");
			else
			printf("salary is 9000");
		else if (q==1)
		printf("salary is 10000");
		     else 
			 printf("salary is 6000");	
	}	
	return 0;
}

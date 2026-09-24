#include<stdio.h>
int main()
{
	float expenses[12],sum=0;
	int i;
	printf("enter expenses of 12 months in array \n");
	for(i=0;i<12;i++)
	{scanf("%f",&expenses[i]);
	}

	for(i=0;i<12;i++)
	{
		sum=sum+expenses[i];
	}
	printf("total expenses in 12 months is %.2f \n",sum);
	printf("average of expenses of 12 months is %.2f",sum/12);
	
	return 0;
	
}

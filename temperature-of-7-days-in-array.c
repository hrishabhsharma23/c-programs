#include<stdio.h>
int main()
{
	float temp[8],sum=0;
	int i;
	printf("enter temperature of 7 days in array \n");
	for(i=0;i<7;i++)
	{scanf("%f",&temp[i]);
	}
	printf("sum of all temperature of 7 days in array");
	for(i=0;i<7;i++)
	{
		sum=sum+temp[i];
	}
	printf("average temperature of 7 days is %.2f",sum/7);
	return 0;
	
}

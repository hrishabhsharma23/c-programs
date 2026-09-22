#include<stdio.h>
int main()
{
	int value[10],i,sum=0;
	printf("enter 10 values in array \n");
	for (i=0;i<10;i++)
	{scanf("%d",&value[i]);
	}
	printf(" sum of odd values  in array");
	for (i=0;i<10;i++)
	{
		if (value[i]%2!=0)
		sum=sum+value[i];
	}
	printf("sum of all odd values is %d",sum);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int value[10],i;
	printf("enter 10 values in array");
	for (i=0;i<10;i++)
	{scanf("%d",&value[i]);
	}
	printf("even values in array");
	for (i=0;i<10;i++)
	{
		if (value[i]%2==0)
		printf("%d",value[i]);
	}
	
	return 0;
}

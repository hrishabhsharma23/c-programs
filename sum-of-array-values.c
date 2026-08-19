#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	printf("enter the 10 numbers in array\n");
	for (i=0;i<=9;i++)
	{scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=9;i++)
	{sum=sum+arr[i];
	}
	printf("sum of all arr is %d",sum);
	
	return 0;
}

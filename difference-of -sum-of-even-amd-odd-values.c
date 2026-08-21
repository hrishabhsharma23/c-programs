#include<stdio.h>
int main ()
{
	int arr[10],i,sum1=0,sum2=0,d;
	printf ("enter the 10 numbers in array\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i]%2==0)
		sum1=sum1+arr[i];
		
		else
		sum2=sum2+arr[i];
	}
	printf("sum of even number id %d",&sum1);
	printf("sum of odd numbers is %d",&sum2);
	
	d=sum1-sum2;
	printf("difference of both sum is %d",d);
	
	return 0;
}

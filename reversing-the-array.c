#include<stdio.h>
int main()
{
	int arr[10],i,j;
	printf("enter 10 number in array \n");
	for (i=0;i<10;i++)
	{scanf("%d",&arr[i]);
	}
	printf("\n numbers in array \n");
	for (i=0;i<10;i++)
	{printf("%d \n",arr[i]);
	}
	
	for(i=0,j=9;i<j;i++,j--)
	{arr[i]=arr[i]+arr[j];
	 arr[j]=arr[i]-arr[j];
	 arr[i]=arr[i]-arr[j];
	 
	}
	
	printf("\n numbers in array after reversing ");
	for (i=0;i<10;i++)
	{printf("%d ",arr[i]);
	}
	
	return 0;
}

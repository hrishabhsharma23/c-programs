#include<stdio.h>
int main()
{
	int i,arr[3];
	printf("enter the 3 numbers in array \n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the number is :");
	for(i=0;i<3;i++)
	{
	
	if(arr[i]%2==0)
	{
	printf("%d ",arr[i]);
	}
}
	return 0;
}

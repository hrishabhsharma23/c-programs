#include<stdio.h>
int main()
{
	int arr[10],i,j;
	printf("enter 10 number in array \n");
	for (i=0;i<10;i++)
	{scanf("%d",&arr[i]);
	}
	
    for (i=0,j=9;i<j;i++,j--)
    {
    	if (arr[i]!=arr[j])
    	{
    		printf("array palindrom ni ");
    		break;
		}
	}
//	printf("\n %d %d \n",i,j);
	if (i>j)
	{printf("array palindrom ");
	}
	
	return 0;
	
}

#include<stdio.h>
int main()
{
	int marks[5],i,max,min;
	printf("enter marks of 5 student in array \n");
	for(i=0;i<5;i++)
	{scanf("%d",&marks[i]);
	}
	max=marks[1];
	for(i=0;i<5;i++)
	{if (max<marks[i])
	max=marks[i];
	}
	min=marks[1];
	for(i=0;i<5;i++)
	{if (min>marks[i])
	min=marks[i];
	}
	printf("max is %d \n",max);
	printf("min is %d",min);
	return 0;
}

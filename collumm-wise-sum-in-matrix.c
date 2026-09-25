#include<stdio.h>
int main()
{
	int m[3][3],i,j,sum;
	printf("enter values in matrix: \n");
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{	sum=0;
		for(i=0;i<3;i++)
		{
			sum=sum+m[i][j];
	
		}
		printf("sum of columm%d is %d",j+1,sum);
	}
	return 0;
 } 

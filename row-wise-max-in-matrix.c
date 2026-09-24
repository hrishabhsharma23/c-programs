#include<stdio.h>
int main()
{
	int m[3][3],i,j,max;
	printf("enter values in matrix: \n");
	for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	{scanf("%d",&m[i][j]);
	}
	}
	for(i=0;i<3;i++)
	{	max=m[i][0];
		for(j=0;j<3;j++)

		{if (max<m[i][j])
	 		max=m[i][j];
		
		}
		printf(" \nmax in row%d is %d",i+1,max);
	}
	return 0;
 } 

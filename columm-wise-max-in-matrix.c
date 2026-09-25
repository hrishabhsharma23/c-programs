#include<stdio.h>
int main()
{
	int m[3][3],i,j,max;
	printf("enter values in matrix: \n");
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{scanf("%d",&m[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{	max=m[0][j];
		for(i=0;i<3;i++)
		{ 
	 		if (max<m[i][j])
	 			max=m[i][j];
	
		}
		printf("max in columm%d is %d",j+1,max);
	}
	return 0;
 } 

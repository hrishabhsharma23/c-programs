#include<stdio.h>
int main()
{
	int i,j,m=0;
	printf("Enter the number:");
	scanf("%d",&i);
	
	while(i>0)
	{
		j=i%10;
		m=j+(m*10);
		i=i/10;
	}
	
	printf("the ultA number is :%d",m);
	
	return 0;
}

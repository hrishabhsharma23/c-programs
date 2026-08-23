#include<stdio.h>
int main()
{
	int n,i,sume=0,sumo=0;
	
	printf("enter integer :");
	scanf("%d",&n);
	
	while(n!=0)
	{
	i=n%10;
	if (i%2==0)
	sume=sume+i;
	else

    sumo=sumo+i;
	
	n=n/10;
	}
	
	printf("the sum of even digit is %d \n",sume);
	printf("the sum of odd digit is %d",sumo);
	
	return 0;
	
}

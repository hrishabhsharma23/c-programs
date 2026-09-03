#include<stdio.h>
int main()
{
	int a;
	
	printf("enter number:");
	scanf("%d",&a);
		
	if(a>0)
	printf("a is +ve ");
	
	else if(a<0)
	printf("a is -ve");
	
    else
    printf("a is zero ");
    
	return 0 ;
			
}

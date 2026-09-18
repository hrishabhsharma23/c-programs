#include<stdio.h>
int main()
{
	int n,m=0,r;
	printf("enter number :");
	scanf("%d",&n);
  
    
	while(n!=0&&n%10!=0)
	    {   r=n%10;
	    
	    	m=m+r;
	    	n=n/10;
	    }
	    
	printf("sum is %d",m);
	    
	


	return 0;
}

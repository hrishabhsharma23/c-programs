#include<stdio.h>
int main ()
{
	int p,c,m;
	float per,total;
	
	printf("enter numbers in subject : \n ");
	scanf ("%d""%d""%d",&p,&c,&m);
	
	total=p+c+m;
	per=total*100/300;
	
	printf("percentage is %f",per);
	
	if (per>100)
	printf("invalid input");
	else if (per<0)
	printf("invalid input");
		else if (per>=60)
	printf("first");
		else if (per>=48)
	printf("second");
		else if (per>=36)
	printf("third");
		else 
	printf("fail");
	return 0;
}

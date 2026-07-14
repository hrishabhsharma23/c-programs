#include<stdio.h>
int main ()
{
	int p,r,t,SI,multiply ;
	printf ("bhai tere principal bata");
	scanf ("%d",&p);
	printf("bhai tera rate of interest bata");
	scanf("%d",&r);
	printf ("bhai time bata");
	scanf("%d",&t);
	
	SI=(p*r*t)/100;
	 
	printf("bhai tera SI=%d",SI);
	return 0;
}

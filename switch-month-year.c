#include<stdio.h>
int main()
{
	int month,y;

	
	printf("enter month number:");
	scanf("%d",&month);
	
	printf ("enter year :");
	scanf ("%d ",&y);
	
	switch(month)
	{
		case 1:
			
			printf("31 days");
			break;
		case 2:
			
			if(y%400==0)
			printf("29 days ");
			else if(y%100!=0)
			if(y%4==0)
			printf("29 days");
			else
			printf("28 days");
			break;
		case 3:
			
			printf("31 days");
			break;
		case 4:
			
			printf("30 days");
			break;
		case 5:
			
			printf("31 days");
			break;
		case 6:
			
			printf("30 days");
			break;
			
		case 7:
			
			printf("31 days");
			break;
			
		case 8:
			
			printf("31 days");
			break;
			
		case 9:
			
			printf("30 days");
			break;
			
		case 10:
			
			printf("31 days");
			break;
			
		case 11:
			
			printf("30 days");
			break;
			
		case 12:
			
			printf("31 days");
			break;
	}
	return 0;
}

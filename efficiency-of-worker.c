#include<stdio.h>
int main()
{
	float t;
	printf("enter time taken by worker :");
	scanf("%f",&t);
	
	if (t<=3)
	printf("worker is highly efficient");
		else if(t<=4) 
		printf("improve speed");
			else if (t<=5)
			printf("training is given to improve speed");
				else
				printf("worker is terminated");
				
	return 0;			
}

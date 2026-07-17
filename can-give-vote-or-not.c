#include<stdio.h>
int main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	
	printf(age>=18?"can give vote":"can not give vote");
	return 0 ;
}

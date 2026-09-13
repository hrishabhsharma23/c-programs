#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	
	printf("enter op :");
	scanf("%c",&op);
	
	printf ("enter a and b :");
	scanf ("%d %d",&a,&b);
	
	
	
	
	switch(op)
	{
		case '+':
			c=a+b;
			printf("answer is %d",c);
			break;
		case '-':
			c=a-b;
			printf("answer is %d",c);
			break;
		case '*':
			c=a*b;
			printf("answer is %d",c);
			break;
		case '/':
			c=a/b;
			printf("answer is %d",c);
			break;
		case '%':
			c=a%b;
			printf("answer is %d",c);
			break;
		default:
			printf("invalid input");
	}
	return 0;
}

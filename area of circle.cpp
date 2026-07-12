#include<stdio.h>
int main ()
{
	int radius;
	float area,circ;
	
	printf ("bhai circle ka radius bata");
	scanf ("%d",&radius);
	
	area= 3.14*radius*radius;
	circ=2*3.14*radius;
	
	printf("bhai tere circle ka area=%f",area);
	printf ("\n circumference hai =%f",circ);
	
	return 0;
}

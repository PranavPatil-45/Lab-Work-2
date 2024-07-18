#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,y,z,t;
	printf("Enter Value Of x:");
	scanf("%d",&x);
	printf("Enter Value Of y:");
	scanf("%d",&y);
	printf("Enter Value Of z:");
	scanf("%d",&z);
	printf("Enter Value Of t:");
	scanf("%d",&t);
	
	if(x>y)
	{
		if(x>z)
		{
			if(x>t)
			{
				printf("x is maximum");
			}
			else
			{
				printf("t is maximum");
			}
		}
		else
		{
			printf("z is maximum");
		}
	}
	else
	{
		if(y>z)
		{
			if(y>t)
			{
				printf("y is maximum");
			}
			else
			{
				printf("t is maximum");
			}
		}
		else
		{
			if(z>t)
			{
				printf("z is maximum");
			}
			else
			{
				printf("t is maximum");
			}
		}
	}
}

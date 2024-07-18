#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	
	printf("Enter value x :");
	scanf("%d",&x);
	printf("Enter value y :");
	scanf("%d",&y);
	printf("Enter value z :");
	scanf("%d",&z);
	
	if(x<y)
	{
		if(x<z)
		{
		printf("x is Minimum ");	
		}
		
		else
		{
			printf("z is Minimum");
		}
	}
	else
	{
		if(y<z)
		{
			printf("y is Minimum");
			
		}
		else
		{
			printf("z is Minimum");
		}
	}
}
	

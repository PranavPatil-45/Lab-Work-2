#include<stdio.h>
#include<conio.h>

void main()
{
	float x,y,z,avg;
	
	printf("Enter your  maths marks :");
	scanf("%f",&x);	
	
	printf("Enter your  science marks :");
	scanf("%f",&y);	
	
	printf("Enter your  geography marks :");
	scanf("%f",&z);
	
	if(x<=100 && y<=100 && z<=100)
	{
		avg=(x+y+z)/3;
		printf("Average marks:%.2f",avg);
	}
	else 
	{
		printf("Invalid Marks");
	}
}

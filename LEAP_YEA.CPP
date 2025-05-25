#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	clrscr();
	printf("\nEnter a year:");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("\nIs a leap year:");
	}
	else if(y%100==0)
	{
		printf("\nIs not a leap year:");
	}
	else if(y%4==0)
	{
		printf("\nIs a leap year:");
	}
	else
	{
		printf("\nIs not a leap year:");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int lite;
	clrscr();
	printf("\nHow much liter water are you drink full day:");
	scanf("%d",&lite);
	if(lite<=2)
	{
		printf("\nYou are under hydrated:");
	}
	else if(lite<=3)
	{
		printf("\nYou are hydrated:");
	}
	else if(lite<=5)
	{
		printf("\nYou are over hydrated:");
	}
	else
	{
		printf("\nInvalid data:");
	}
	getch();
}

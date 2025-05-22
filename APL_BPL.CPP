#include<stdio.h>
#include<conio.h>
void main()
{
	int inco;
	clrscr();
	printf("\nEnter you montly income:");
	scanf("%d",&inco);
	if(inco>2000)
	{
		printf("you are eligible to survive:");
	}
	else
	{
		printf("\nyou are not eligible for survive:");
	}
	getch();
}
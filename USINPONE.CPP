#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter value A:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\nA is a positive number:");
	}
	else
	{
		printf("\nA is a negative number:");
	}
	getch();
}
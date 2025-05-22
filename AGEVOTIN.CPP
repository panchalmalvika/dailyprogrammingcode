#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\nEnter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\nYou are eligible for voting:");
	}
	else
	{
		printf("\nYou are not eligible for voting ");
	}
	getch();
}
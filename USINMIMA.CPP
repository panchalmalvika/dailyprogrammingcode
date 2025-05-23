#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter value of A:");
	scanf("%d",&a);
	printf("\nEnter value of B:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\nA is a max number");
	}
	else
	{
		printf("\nB is a max number");
	}
	getch();
}
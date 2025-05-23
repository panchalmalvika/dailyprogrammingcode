#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter the value of A:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\nA is even number");
	}
	else
	{
		printf("\nA is odd number");
	}
	getch();
}
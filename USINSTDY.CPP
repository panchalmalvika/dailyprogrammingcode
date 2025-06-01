#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,spa,row;
	clrscr();
	printf("\nEnter the row value:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(spa=1;spa<=row-i;spa++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=row;i>=1;i--)
	{
		for(spa=1;spa<=row-i;spa++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
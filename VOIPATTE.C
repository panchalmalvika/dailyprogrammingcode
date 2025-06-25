#include<stdio.h>
#include<conio.h>
void pattern()
{
	int i,j,k,n;
	printf("\nEnter a value : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
void main()
{
	clrscr();
	pattern();
	getch();
}
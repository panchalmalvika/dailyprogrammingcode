#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row;
	clrscr();
	printf("\nEnter the value of row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=1;j<=17;j++)
		{
			if(j>=n-i && j<=2*i && j>=4*n-i && j<=5*n+i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	for(i=0;i<3*n;i++)
	{
		for(j=1;j<=6*n-1;j++)
		{
			if(j>=1+i && j<=6*n-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],i,j;
	clrscr();
	printf("\nEnter value of A:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter value of A[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter value of B:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter value of B[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	getch();

}


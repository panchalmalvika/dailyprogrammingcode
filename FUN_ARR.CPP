#include<stdio.h>
#include<conio.h>
void dimension()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\nArray of 2 dimensional A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter row %d & column %d:",i,j);
			scanf("%d",a[i][j]);
		}
	}
	printf("\nArray of 2 dimensional B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter row %d & column %d:",i,j);
			scanf("%d",b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nAddition of two dimension\n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t%d",c[i][j]);
			}
			printf("\n");
		}
	}
}
void main()
{
	clrscr();
	dimension();
	getch();
}
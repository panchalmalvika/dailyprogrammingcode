#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,*p;
	clrscr();
	printf("\n2 dimensional array A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a row %d & column %d:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n2 dimensional array A with address\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a row %d & column %d with address %u:\n",i,j,p++);
		}
	}
	printf("\n2 dimensional array B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a row %d & column %d:",i,j);
			scanf("%d",b[i][j]);
		}
	}
	printf("\n2 dimensional array B with address\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a row %d & column %d with address %u:\n",i,j,p++);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nAddition of 2 dimension:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
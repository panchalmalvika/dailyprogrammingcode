#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	clrscr();
	printf("\nEnter Array value:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d element:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nSum: %d",sum);
	printf("\nArray element are:\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d]: %d",i,a[i]);
	}
	getch();
}
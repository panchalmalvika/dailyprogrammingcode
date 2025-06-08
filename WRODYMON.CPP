#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\nEnter value:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=a-b;c++)
		{
			printf(" ");
		}
		for(d=1;d<=a;d++)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}
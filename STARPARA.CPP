#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b;
	clrscr();
	printf("\nEnter value:");
	scanf("%d",&i);
	for(a=0;a<=i;a++)
	{
		for(b=0;b<=a-1;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
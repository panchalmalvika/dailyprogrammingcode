#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(k=5;k>=i;k--)
		{
			printf("   ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	getch();
}
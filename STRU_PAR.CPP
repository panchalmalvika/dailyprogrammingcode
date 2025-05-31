#include<stdio.h>
#include<conio.h>
struct pattern
{
	int i,n,j,k;
};
void main()
{
	struct pattern p;
	clrscr();
	printf("\nEnter a value:");
	scanf("%d",&p.n);
	for(p.i=0;p.i<p.n;p.i++)
	{
		for(p.j=0;p.j<=p.n-p.i;p.j++)
		{
			printf(" ");
		}
		for(p.k=0;p.k<=p.i;p.k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}
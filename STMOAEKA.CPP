#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	for(a=0;a<10;a++)
	{
		for(b=0;b<9-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" %d",c);
		}
		printf("\n");
	}
	getch();
}
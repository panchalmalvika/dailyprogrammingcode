#include<stdio.h>
#include<conio.h>
void point()
{
	double a,*p;
	a=10;
	p=&a;
	printf("\na: %lf",a);
	printf("\np: %u",p);
	printf("\n*p: %lf",*p);
}
void main()
{
	clrscr();
	point();
	getch();
}

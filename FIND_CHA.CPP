#include<stdio.h>
#include<conio.h>
void main()
{
	double a,b,*p,*q;
	clrscr();
	a=10;
	p=&a;
	printf("\na: %lf",a);
	printf("\np: %u",p);
	printf("\n*p: %lf",*p);
	b=20;
	q=&b;
	printf("\nb: %lf",b);
	printf("\nq: %u",q);
	printf("\n*q: %lf",*q);
	getch();
}
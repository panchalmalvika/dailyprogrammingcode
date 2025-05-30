#include<stdio.h>
#include<conio.h>
struct address
{
	int i,b,c,p;
};
void main()
{
	struct address a;
	clrscr();
	printf("\nEnter a value:");
	scanf("%d",&a.i);
	printf("\nEnter a value:");
	scanf("%d",&a.b);
	a.c=a.i+a.b;
	printf("\nAddition od two value: %d",a.c);
	printf("\ntotal value: %d \naddress: %u",a.c,a.p);
	getch();
}
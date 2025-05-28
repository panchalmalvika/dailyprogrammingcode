#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int x,y;
	clrscr();
	printf("\nEnter value:");
	scanf("%d",&x);
	printf("\nEnter value:");
	scanf("%d",&y);
	printf("\nAddition: %d",add(x,y));
	getch();
}
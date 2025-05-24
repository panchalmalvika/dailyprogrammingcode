#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("\nEnter a value of A:");
	scanf("%d",&a);
	printf("\nEnter value of B:");
	scanf("%d",&b);
	printf("\nBefore swapping:");
	printf("\nA: %d & B: %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping:");
	printf("\nA: %d & B: %d",a,b);
	getch();
}
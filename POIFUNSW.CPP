#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int x,y;
	clrscr();
	printf("\nEnter a value:");
	scanf("%d",&x);
	printf("\nEnter a value:");
	scanf("%d",&y);
	printf("\nBefore exchange value is: %d & %d",x,y);
	swap(&x,&y);
	printf("\nAfter exchange value is: %d & %d",x,y);
	getch();
}
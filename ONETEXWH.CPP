#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter a value of A:");
	scanf("%d",&a);
	do{
		a--;
		printf("\nHello");
	}while(a<0);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int div,divi,quo,rema;
	clrscr();
	printf("\nEnter divident:");
	scanf("%d",&divi);
	printf("\nEnter divisor:");
	scanf("%d",&div);
	quo=divi/div;
	rema=divi%div;
	printf("\nQuotient: %d",quo);
	printf("\nRemainder: %d",rema);
	getch();
}
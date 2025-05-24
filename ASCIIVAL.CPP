#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("\nEnter a character:");
	scanf("%c",&c);
	printf("\nAscii value of %c : %d",c,int(c));
	getch();
}
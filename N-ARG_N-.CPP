#include<stdio.h>
#include<conio.h>
void printline()
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("*");
	}
}
void main()
{
	clrscr();
	printline();
	printf("\n\tWelcome to user define fuction in c\n");
	printline();
	getch();

}
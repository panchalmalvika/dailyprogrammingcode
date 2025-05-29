#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0;
	clrscr();
	start:
		printf("%d\n",n);
		n++;
	if(n<5)
	{
		goto start;
	}
	getch();
}
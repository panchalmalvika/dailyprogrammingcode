#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=9;b++)
		{
			printf("  ");
		}
		for(c=1;c<=a;c++)
		{
			printf("  %",'*');
		}
		printf("\n");
	}
	getch();

}
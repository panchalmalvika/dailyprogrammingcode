
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	for(a=0;a<10;a++)
	{
		for(c=0;c<=9-a;c++)
		{
			printf(" ");
		}
		for(b=0;b<=a;b++)
		{
			printf("%c ",'*');
		}
		printf("\n");
	}
	getch();
}
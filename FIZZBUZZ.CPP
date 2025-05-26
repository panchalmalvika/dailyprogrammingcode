#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("\nfizzbuzz");
		}
		else if(i%3==0)
		{
			printf("\nFizz");
		}
		else if(i%5==0)
		{
			printf("\nBuzz");
		}
		else
		{
			printf("%d",i);
		}
	}
	getch();
}
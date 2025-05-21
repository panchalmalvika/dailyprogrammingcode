#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("continue Statement:");
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("\n %d",i);
	}
	getch();
}
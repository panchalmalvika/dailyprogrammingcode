#include<stdio.h>
#include<conio.h>
void whileloop()
{
	int i=0,j;
	printf("\nEnter a value:");
	scanf("%d",&j);
	while(i<j)
	{
		i++;
		printf("\n%d",i);
	}
}
void main()
{
	clrscr();
	whileloop();
	getch();
}

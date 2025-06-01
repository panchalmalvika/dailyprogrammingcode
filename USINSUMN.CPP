#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0;
	clrscr();
	printf("\nEnter value:");
	scanf("%d",&a);
	while(a>0)
	{
		sum=sum+a;
		a--;
	}
	printf("\n%d",sum);
	getch();
}
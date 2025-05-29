#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,*p;
	clrscr();
	printf("\nEnter value:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nsum: %d",sum);
	printf("\nAddress: %u",p);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int mincome,loan,time,count,mamount;
	char *sinfo;
	clrscr();
	printf("\nEnter your name:");
	gets(sinfo);
	printf("\nEnter your monthly family income:");
	scanf("%d",&mincome);
	printf("\nEnter amount of loan:");
	scanf("%d",&loan);
	printf("\nRule: Your loan are not longer taken by 3 year:");
	printf("\nEnter your mounthly payable amount:");
	scanf("%d",&mamount);
	count=mamount*36;
	if(count>=mamount)
	{
		printf("\nYou are eligible to pay loan:");
	}
	else
	{
		printf("\nYou are not eligible to pay loan:");
	}
	getch();
}
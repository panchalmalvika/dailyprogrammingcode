#include<stdio.h>
#include<conio.h>
void main()
{
	int num,package,amount;
	clrscr();
	printf("\nEnter your number to recharge:");
	scanf("%d",num);
	printf("\nHere are package: \n10 \n20 \n50 \n199 \n299 \n399 \n555 \n666 \n777 \n999");
	printf("\nEnter recharge package:");
	scanf("%d",&package);
	if(package==10)
	{
		printf("\nYour Rs.10 recharge is succusefull:");
	}
	else if(package==20)
	{
		printf("\nyour recharge Rs.20 is succsefull:");
	}
	else if(package==50)
	{
		printf("\nyour recharge Rs.50 is succesfull:");
	}
	else if(package==199)
	{
		printf("\nyour recharge Rs.199 is succesfull:");
	}
	else if(package==299)
	{
		printf("\nyour recharge Rs.299 is succesfull:");
	}
	else if(package==399)
	{
		printf("\nyour recharge Rs.399 is succesfull:");
	}
	else if(package==555)
	{
		printf("\nyour recharge Rs.555 is succesfull:");
	}
	else if(package==666)
	{
		printf("\nyour recharge Rs.666 is succesfull:");
	}
	else if(package==777)
	{
		printf("\nyour recharge Rs.777 is succesfull:");
	}
	else if(package==999)
	{
		printf("\nyour recharge Rs.999 is succesfull:");
	}
	getch();
}
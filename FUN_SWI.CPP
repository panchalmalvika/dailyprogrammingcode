#include<stdio.h>
#include<conio.h>
void swich()
{
	int a;
	printf("Enter a value from 1 to 10:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nYellow:");
			break;
		case 2:
			printf("\nRed:");
			break;
		case 3:
			printf("\nOrange:");
			break;
		case 4:
			printf("\nBlue:");
			break;
		case 5:
			printf("\nGray:");
			break;
		case 6:
			printf("\nwhite:");
			break;
		case 7:
			printf("\nBlack:");
			break;
		case 8:
			printf("\nGreen:");
			break;
		case 9:
			printf("\nPurple:");
			break;
		case 10:
			printf("Brown");
	}
}
void main()
{
	clrscr();
	swich();
	getch();
}
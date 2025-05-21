#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[30]="Malvika Love";
	char s2[]=" Jagrat";
	clrscr();
	strcat(s1,s2);
	printf("\nstring after concatnation: \n\n%s\n",s1);
	getch();
}
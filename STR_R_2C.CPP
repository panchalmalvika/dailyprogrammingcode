#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[30],b[30],c[30];
	clrscr();
	printf("\nEnter string:");
	gets(a);
	printf("\nEnter string 2:");
	gets(b);
	strrev(a);
	printf("\nHere are the reversed string: %s",a);
	strcmp(a,b);
	if(a==0)
	{
		printf("\nString is mach:");
	}
	else
	{
		printf("\nString is not mach:");
	}
	strcat(a,b);
	printf("\nHere are the string combine: %s",a);
	getch();
}
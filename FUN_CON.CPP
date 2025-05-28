#include<stdio.h>
#include<conio.h>
#include<string.h>
void concat()
{
	char a[30],b[30],c[50];
	printf("\nEnter a string:");
	gets(a);
	printf("\nEnter a second string:");
	gets(b);
	strcat(a,b);
	printf("\nConcate string is here: %s",a,b);

}
void main()
{
	clrscr();
	concat();
	getch();
}
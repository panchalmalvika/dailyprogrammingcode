#include<stdio.h>
#include<conio.h>
void main()
{
	typedef char name;
	name sname[50];
	name mname[50];
	name fname[50];
	clrscr();
	printf("\nEnter a student name:");
	gets(sname);

	printf("\nEnter a mother name:");
	gets(mname);

	printf("\nEnter a father name:");
	gets(fname);

	getch();
}
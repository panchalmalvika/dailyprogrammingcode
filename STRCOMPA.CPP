#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20],s3[20];
	int l,m;
	clrscr();
	printf("\nEnter string 1:");
	gets(s1);
	l=strlen(s1);
	printf("\nLength of string 1 is %d",l);
	printf("\nEnter string 2:");
	gets(s2);
	m=strcmp(s1,s2);
	if(m==0)
	{
		printf("\nBoth string are equal:");
	}
	else
	{
		printf("\nBoth string are different:");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],s3[50];
	int l,m;
	clrscr();
	printf("\nEnter string:");
	gets(s1);
	l=strlen(s1);
	printf("\nLength of string 1 is %d:",l);
	printf("\nEnter string:");
	gets(s2);
	m=strcmp(s1,s2);
	if(m==0)
	{
		printf("\nBoth string is equal:");
	}
	else
	{
		printf("\nBoth string is different:");
	}
	strcat(s1,s2);
	printf("\nAfter concat string 1 is %s",s1);
	strcpy(s3,s1);
	printf("\nAfter concat string 2 is %s",s3);
	strrev(s3);
	printf("\nAfter rever the string 3 is %s",s3);

	getch();
}
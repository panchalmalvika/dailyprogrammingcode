#include<stdio.h>
#include<conio.h>
#include<string.h>
void String()
{
	char a[50],b[50],c[50];
	int j,m;
	printf("Enter a string:");
	gets(a);
	j=strlen(a);
	printf("\nlength of string 1 is %d",j);
	printf("\nEnter string 2:");
	gets(b);
	m=strcmp(a,b);
	if(m==0)
	{
		printf("\nBoth string are equal:");
	}
	else
	{
		printf("\nBoth string are different:");
	}
	strcat(a,b);
	printf("\nAfter concat string 1 is %s",a);
	strcpy(c,a);
	printf("\nAfter concat string 3 is %s",c);
	strrev(c);
	printf("\nAfter strimg revered string 3 is %s",c);
}
void main()
{
	clrscr();
	String();
	getch();
}
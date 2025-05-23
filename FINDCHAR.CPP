#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],ch;
	int count=0,m,i;
	clrscr();
	printf("\nEnter string:");
	gets(s1);
	printf("\nAdd character do you want from string: ");
	scanf("%c",&ch);
	m=strlen(s1);
	for(i=0;i<m;i++)
	{
		if(s1[i]==ch)
		{
			count++;
		}
	}
	printf("\nTotal no. of %c is %d",ch,count);
	getch();
}
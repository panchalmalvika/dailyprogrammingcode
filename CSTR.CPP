#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],s3[50];
	int p,q;
	clrscr();
	cout<<"\nEnter a string:";
	cin>>s1;
	p=strlen(s1);
	cout<<"\nlength of the string:"<<s1;
	cout<<"\nEnter the second string:";
	cin>>s2;
	q=strcmp(s1,s2);
	if(q==0)
	{
		cout<<"\nBoth string are equal:";
	}
	else
	{
		cout<<"\nBoth string are different:";
	}
	strcat(s1,s2);
	cout<<"\nAfter concat string is:"<<s1;
	strcpy(s3,s1);
	cout<<"\nBefore concat string is:"<<s3;
	strrev(s3);
	cout<<"\nAfter string reversed string:"<<s3;
	getch();
}
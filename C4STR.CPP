#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[40],b[40],c[40];
	int p,x,q;
	clrscr();
	//code in c++ on string(strlen,strcmp,strrev,strcat)
	cout<<"\nEnter a one string: ";
	cin>>a;
	p=strlen(a);
	cout<<"\nString length: "<<p;
	cout<<"\n\nEnter a second string: ";
	cin>>b;
	q=strlen(b);
	cout<<"\nString length: "<<q;
	x=strcmp(a,b);
	if(x==0)
	{
		cout<<"\n\nBoth string are equal:";
	}
	else
	{
		cout<<"\n\nBoth string are different:";
	}
	strcat(a,b);
	cout<<"\nafter this two string are concat: "<<a;
	strcpy(c,a);
	strrev(c);
	cout<<"\nafter string is reversed: "<<c;
	getch();
}
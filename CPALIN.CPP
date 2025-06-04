#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	//code in c++ on string code palindrom:
	char a[30],b[30];
	int x;
	clrscr();
	cout<<"\nEnter one string:";
	cin>>a;
	strcpy(b,a);
	strrev(b);
	x=strcmp(a,b);
	cout<<"\noriginal string:"<<a;
	cout<<"\nreversed string:"<<b;
	if(x==0)
	{
		cout<<"\nGiven string are palindrom:";
	}
	else
	{
		cout<<"\nGiven string are not palindrom:";
	}
	getch();
}
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[50],b[50];
	int i;
	clrscr();
	cout<<"\nEnter a string: ";
	cin>>a;
	strcpy(b,a);
	cout<<"\nString: "<<a;
	strrev(b);
	cout<<"\nreversed string: "<<b;
	i=strcmp(a,b);
	if(i==0)
	{
	       cout<<"\nstring are palindrom:";
	}
	else
	{
		cout<<"\nString are not palindrom:";
	}
	getch();
}
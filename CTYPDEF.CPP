#include<iostream.h>
#include<conio.h>
void main()
{
	typedef char name;
	name myname[50];
	name momname[50];
	name fname[50];
	clrscr();
	cout<<"\nEnter your name:";
	cin>>myname;
	cout<<"\nEnter your mother name:";
	cin>>momname;
	cout<<"\nEnter your father name:";
	cin>>fname;
	cout<<"\n\nAll information:";
	cout<<"\nyour name: "<<myname;
	cout<<"\nyour mother name: "<<momname;
	cout<<"\nyour father name: "<<fname;
	getch();
}
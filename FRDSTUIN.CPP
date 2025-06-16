#include<iostream.h>
#include<conio.h>
class lname;
class mname;
class myname
{
	char a[50];
	public:
		void geta()
		{
			cout<<"\nEnter your name : ";
			cin>>a;
		}
		friend void name(myname a[50],lname b[50],mname c[50]);
};
class lname
{
	char b[50];
	public:
		void getb()
		{
			cout<<"\n\nEnter your last name : ";
			cin>>b;
		}
		friend void name(myname a[50],lname b[50],mname c[50]);
};
class mname
{
	char c[50];
	public:
		void getc()
		{
			cout<<"\n\nEnter your middle name : ";
			cin>>c;
		}
		friend void name(myname a[50],lname b[50],mname c[50]);
};
void name()
{
	cout<<"\n\nfull name : "<<a[50]<<" "<<b[50]<<" "<<c[50];
}
void main()
{
	clrscr();
	myname m1;
	lname l1;
	mname m2;
	m1.geta();
	l1.getb();
	m2.getc();
	name();
	getch();
}
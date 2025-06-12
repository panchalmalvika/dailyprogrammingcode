#include<iostream.h>
#include<conio.h>
class A
{
	char name[50];
	int r,j,c,cpp,t,p;
	public:
		void geta()
		{
			cout<<"\nFirst Student:";
			cout<<"\nEnter Student name: ";
			cin>>name;
			cout<<"Enter Student roll no.: ";
			cin>>r;
			cout<<"Enter java marks: ";
			cin>>j;
			cout<<"Enter c marks: ";
			cin>>c;
			cout<<"Enter c++ marks: ";
			cin>>cpp;
		}
		void puta()
		{
			cout<<"\n\nStudent name: "<<name;
			cout<<"\nStudent roll no.: "<<r;
			cout<<"\nJava marks: "<<j;
			cout<<"\nC marks: "<<c;
			cout<<"\nC++ marks: "<<cpp;
			t=j+c+cpp;
			cout<<"\nTotal marks: "<<t;
			p=t/3;
			cout<<"\nPercentage: "<<p;
		}
};
class B: public A
{
	char name[50];
	int r,j,c,cpp,t,p;
	public:
		void getb()
		{
			cout<<"\n\nSecond Student:\n";
			cout<<"Enter Student name: ";
			cin>>name;
			cout<<"Enter Student roll no.: ";
			cin>>r;
			cout<<"Enter java marks: ";
			cin>>j;
			cout<<"Enter c marks: ";
			cin>>c;
			cout<<"Enter c++ marks: ";
			cin>>cpp;
		}
		void putb()
		{
			cout<<"\n\nStudent name: "<<name;
			cout<<"\nStudent roll no.: "<<r;
			cout<<"\nJava marks: "<<j;
			cout<<"\nC marks: "<<c;
			cout<<"\nC++ marks: "<<cpp;
			t=j+c+cpp;
			cout<<"\nTotal marks: "<<t;
			p=t/3;
			cout<<"\nPercentage: "<<p;
		}
};
class C: public A
{
	char name[50];
	int r,j,c,cpp,t,p;
	public:
		void getc()
		{
			cout<<"\n\nThird Student:\n";
			cout<<"Enter Student name: ";
			cin>>name;
			cout<<"Enter Student roll no.: ";
			cin>>r;
			cout<<"Enter java marks: ";
			cin>>j;
			cout<<"Enter c marks: ";
			cin>>c;
			cout<<"Enter c++ marks: ";
			cin>>cpp;
		}
		void putc()
		{
			cout<<"\n\nStudent name: "<<name;
			cout<<"\nStudent roll no.: "<<r;
			cout<<"\nJava marks: "<<j;
			cout<<"\nC marks: "<<c;
			cout<<"\nC++ marks: "<<cpp;
			t=j+c+cpp;
			cout<<"\nTotal marks: "<<t;
			p=t/3;
			cout<<"\nPercentage: "<<p;
		}
};
class D: public A
{
	char name[50];
	int r,j,c,cpp,t,p;
	public:
		void getd()
		{
			cout<<"\n\nForth Student:\n";
			cout<<"Enter Student name: ";
			cin>>name;
			cout<<"Enter Student roll no.: ";
			cin>>r;
			cout<<"Enter java marks: ";
			cin>>j;
			cout<<"Enter c marks: ";
			cin>>c;
			cout<<"Enter c++ marks: ";
			cin>>cpp;
		}
		void putd()
		{
			cout<<"\n\nStudent name: "<<name;
			cout<<"\nStudent roll no.: "<<r;
			cout<<"\nJava marks: "<<j;
			cout<<"\nC marks: "<<c;
			cout<<"\nC++ marks: "<<cpp;
			t=j+c+cpp;
			cout<<"\nTotal marks: "<<t;
			p=t/3;
			cout<<"\nPercentage: "<<p;
		}
};
void main()
{
	clrscr();
	B b1;
	C c1;
	D d1;
	b1.geta();
	b1.getb();
	c1.getc();
	d1.getd();
	b1.puta();
	b1.putb();
	c1.putc();
	d1.putd();
	getch();
}
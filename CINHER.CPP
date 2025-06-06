#include<iostream.h>
#include<conio.h>
class a
{
	int a,b,c;
	public:
		void geta()
		{
			cout<<"\nEnter a value:";
			cin>>a;
			cout<<"\nEnter a value:";
			cin>>b;
		}
		void puta()
		{
			cout<<"\n\nValue of A: "<<a;
			cout<<"\nValue of B: "<<b;
			c=a+b;
			cout<<"\nAddition: "<<c;
		}
};
class b:public a
{
	int x,y,z;
	public:
		void getb()
		{
			cout<<"\n\nEnter a value: ";
			cin>>x;
			cout<<"\nEnter a value: ";
			cin>>y;
		}
		void putb()
		{
			cout<<"\n\nValue of X: "<<x;
			cout<<"\nValue of Y: "<<y;
			z=x-y;
			cout<<"\nSubtraction: "<<z;
		}
};
class c:public b
{
	int p,q,r;
	public:
		void getc()
		{
			cout<<"\n\nEnter value: ";
			cin>>p;
			cout<<"\nEnter value: ";
			cin>>q;
		}
		void putc()
		{
			cout<<"\n\nValue of P: "<<p;
			cout<<"\nValue of Q: "<<q;
			r=p*q;
			cout<<"\nMultiplication: "<<r;
		}
};
class d:public c
{
	int l,m,n;
	public:
		void getd()
		{
			cout<<"\n\nEnter a value: ";
			cin>>l;
			cout<<"\nEnter a value: ";
			cin>>m;
		}
		void putd()
		{
			cout<<"\n\nValue of L: "<<l;
			cout<<"\nValue of M: "<<m;
			n=l/m;
			cout<<"\nDivision: "<<n;
		}
};
class e:public d
{
	int a,b,c;
	public:
		void gete()
		{
			cout<<"\n\nEnter a value:";
			cin>>a;
			cout<<"\nEnter a value:";
			cin>>b;
		}
		void pute()
		{
			cout<<"\n\nValue of A:"<<a;
			cout<<"\nValue of B: "<<b;
			c=a%b;
			cout<<"\nModule: "<<c;
		}
};
void main()
{
	clrscr();
	e b1;
	b1.geta();
	b1.puta();
	b1.getb();
	b1.putb();
	b1.getc();
	b1.putc();
	b1.getd();
	b1.putd();
	b1.gete();
	b1.pute();
	getch();
}
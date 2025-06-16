#include<iostream.h>
#include<conio.h>
class sum;
class mul;
class div;
class mod;
class sub
{
	int a,b;
	public:
		void geta()
		{
			cout<<"\nEnter value : ";
			cin>>a;
			cout<<"Enter value : ";
			cin>>b;
			cout<<"\nSubtraction : "<<a-b;
			cout<<"\n\n";
		}
		friend void calculate(sum p,sum q,sub a,sub b,mul j,mul m,div x,div z,mod c,mod d);
};
class sum
{
	int p,q;
	public:
		void getb()
		{
			cout<<"\nEnter a value : ";
			cin>>p;
			cout<<"Enter a value : ";
			cin>>q;
			cout<<"\nAddition : "<<p+q;
			cout<<"\n\n";
		}
		friend void calculate(sum p,sum q,sub a,sub b,mul j,mul m,div x,div z,mod c,mod d);
};
class mul
{
	int j,m;
	public:
		void getc()
		{
			cout<<"\nEnter value : ";
			cin>>j;
			cout<<"Enter value : ";
			cin>>m;
			cout<<"\nMultiplication : "<<j*m;
			cout<<"\n\n";
		}
		friend void calculate(sum p,sum q,sub a,sub b,mul j,mul m,div x,div z,mod c,mod d);
};
class div
{
	int x,y;
	public:
		void getd()
		{
			cout<<"\nEnter value : ";
			cin>>x;
			cout<<"Enter value : ";
			cin>>y;
			cout<<"\nDivision : "<<x/y;
			cout<<"\n\n";
		}
		friend void calculate(sum p,sum q,sub a,sub b,mul j,mul m,div x,div z,mod c,mod d);
};
class mod
{
	int c,d;
	public:
		void gete()
		{
			cout<<"\nEnter value : ";
			cin>>c;
			cout<<"Enter value : ";
			cin>>d;
			cout<<"\nModule : "<<c%d;
			cout<<"\n\n";
		}
		friend void calculate(sum p,sum q,sub a,sub b,mul j,mul m,div x,div z,mod c,mod d);
};
void main()
{
	clrscr();
	sum s1;
	sub s2;
	mul m1;
	div d1;
	mod m2;
	s1.getb();
	s2.geta();
	m1.getc();
	d1.getd();
	m2.gete();
	getch();
}
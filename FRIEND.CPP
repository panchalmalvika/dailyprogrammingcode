#include<iostream.h>
#include<conio.h>
class xyz;	//forward declaration
class abc
{
	int a;
	public:
		void geta()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}
		friend void max(abc a,xyz x);
};
class xyz
{
	int x;
	public:
		void getx()
		{
			cout<<"\nEnter X : ";
			cin>>x;
		}
		friend void max(abc a,xyz x);
};
void max(abc a1,xyz x1)
{
	if(a1.a>x1.x)
	{
		cout<<"\nA is max";
	}
	else
	{
		cout<<"\nX is max";
	}
}
void main()
{
	clrscr();
	abc a1;
	xyz x1;
	a1.geta();
	x1.getx();
	max(a1,x1);
	getch();
}
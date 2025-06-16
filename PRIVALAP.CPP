#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b,c;
	public:
		void geta(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
			cout<<"\nA : "<<a;
			cout<<"\nB : "<<b<<"\nC : "<<c;
			if(a>b)
			{
				if(a>c)
				{
					cout<<"\nA is max";
				}
				else
				{
					cout<<"\nC is max";
				}
			}
			else if(b>c)
			{
				cout<<"\nB is max";
			}
			else
			{
				cout<<"\nC is max";
			}
		}
};
void main()
{
	clrscr();
	abc a1;
	a1.geta(10,20,30);
	getch();
}
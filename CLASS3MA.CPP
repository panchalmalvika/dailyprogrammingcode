#include<iostream.h>
#include<conio.h>
class threemax
{
	int a,b,c;
	public:
		void geta()
		{
			cout<<"\nEnter a value: ";
			cin>>a;
			cout<<"\nEnter a value: ";
			cin>>b;
			cout<<"\nEnter a value: ";
			cin>>c;
		}
		void puta()
		{
			if(a>b)
			{
				if(a>c)
				{
					cout<<"\nA is max: ";
				}
				else
				{
					cout<<"\nC is max: ";
				}
			}
			else if(b>c)
			{
				cout<<"\nB is max: ";
			}
			else
			{
				cout<<"\nC is max: ";
			}

		}
};
void main()
{
	clrscr();
	threemax t1;
	t1.geta();
	t1.puta();
	getch();
}

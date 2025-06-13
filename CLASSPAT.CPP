#include<iostream.h>
#include<conio.h>
class pattern
{
	int a,b,c,i;
	public:
		void geta()
		{
			cout<<"\nEnter value: ";
			cin>>i;
			for(a=0;a<i;a++)
			{
				for(b=0;b<9-a;b++)
				{
					cout<<" ";
				}
				for(c=0;c<=a;c++)
				{
					cout<<" *";
				}
				cout<<"\n";
			}
		}
};
void main()
{
	clrscr();
	pattern p1;
	p1.geta();
	getch();
}
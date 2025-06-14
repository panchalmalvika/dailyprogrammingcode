#include<iostream.h>
#include<conio.h>
class pone
{
	int a;
	public:
		pone()
		{
			cout<<"\nEnter a value: ";
			cin>>a;
			if(a>0)
			{
				cout<<"\nA is a positive value: ";
			}
			else
			{
				cout<<"\nA is a negative value: ";
			}
		}
};
void main()
{
	clrscr();
	pone p1;
	getch();
}
#include<iostream.h>
#include<conio.h>
int add(int a,int b)
{
	return a+b;
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter a value:";
	cin>>x;
	cout<<"\nEnter a value:";
	cin>>y;
	cout<<"\nAddition:"<<add(x,y);
	getch();
}
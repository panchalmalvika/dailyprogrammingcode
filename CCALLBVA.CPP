#include<iostream.h>
#include<conio.h>
void swap(int x,int y);
int main()
{
	int a=2,b=4;
	clrscr();
	swap(a,b);
	cout<<"\nA ="<<a<<" & B ="<<b;
	getch();
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<"\nX ="<<x<<" & Y ="<<y;
}
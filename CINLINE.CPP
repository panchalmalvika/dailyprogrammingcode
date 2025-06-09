#include<iostream.h>
#include<conio.h>
inline square(int a)
{
	return a*a;
}
inline cube(int x)
{
	return x*x*x;
}
void main()
{
	clrscr();
	cout<<"\nSquare of "<<5<<" is "<<square(5);
	cout<<"\nCube of "<<5<<" is "<<cube(5);
	getch();
}
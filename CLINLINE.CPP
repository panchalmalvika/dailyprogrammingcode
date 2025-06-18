#include<iostream.h>
#include<conio.h>
inline sum(int a)
{
	return a+a;
}
inline sub(int b)
{
	return b-b;
}
inline mul(int c)
{
	return c*c;
}
inline mod(int d)
{
	return d%d;
}
inline div(int e)
{
	return e/e;
}
void main()
{
	clrscr();
	cout<<"\nSum : "<<5<<" is "<<sum(5);
	cout<<"\nSub : "<<5<<" is "<<sub(5);
	cout<<"\nMul : "<<5<<" is "<<mul(5);
	cout<<"\nDiv : "<<5<<" is "<<div(5);
	cout<<"\nMod : "<<5<<" is "<<mod(5);
	getch();
}
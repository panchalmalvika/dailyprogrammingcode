#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter a value:";
	cin>>x;
	cout<<"\nEnter a value:";
	cin>>y;
	cout<<"\nBefore exchange value X="<<x<<" & y= "<<y;
	swap(&x,&y);
	cout<<"\nAfter exchange value X="<<x<<" & y= "<<y;
	getch();
}
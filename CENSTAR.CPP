#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,n;
	clrscr();
	cout<<"\nEnter a value: ";
	cin>>n;
	for(a=0;a<n;a++)
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
	getch();
}
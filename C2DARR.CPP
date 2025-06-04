#include<iostream.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	clrscr();
	cout<<"\nEnter 2 array value A:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
		}
	}
	cout<<"\nPrint all values:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\nA["<<i<<"]["<<j<<"] : "<<a[i][j];
		}
	}
	cout<<"\n\nEnter 2 array value B:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"B["<<i<<"]["<<j<<"] :";
			cin>>b[i][j];
		}
	}
	cout<<"\nPrint all values:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\nB["<<i<<"]["<<j<<"] : "<<b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\n\nAddition of two array:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<c[i][j];
		}
		cout<<"\n";
	}
	getch();
}
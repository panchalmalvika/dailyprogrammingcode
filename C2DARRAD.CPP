#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,a[2][2],b[2][2],c[2][2];
	clrscr();
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter row "<<i<<" & column "<<j<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"\n\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter row "<<i<<" & column "<<j<<": ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\nAddition: ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		       cout<<"\nA["<<i<<"]["<<j<<"] : "<<c[i][j];
		}
	}
	getch();
}
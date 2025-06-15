#include<iostream.h>
#include<conio.h>
class array
{
	int a[2][2],b[2][2],c[2][2],i,j;
	public:
		array()
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<"\nEnter a element "<<i<<" & "<<j<<" : ";
					cin>>a[i][j];
				}
			}
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<"\nA["<<i<<"]["<<j<<"] : "<<a[i][j];
				}
			}
			cout<<"\n";
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<"\nEnter a element "<<i<<" & "<<j<<" : ";
					cin>>b[i][j];
				}
			}
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
				cout<<"\n";
				for(j=0;j<2;j++)
				{
					cout<<"\t"<<c[i][j];
				}
			}
		}
};
void main()
{
	clrscr();
	array a1;
	getch();
}
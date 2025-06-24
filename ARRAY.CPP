#include<iostream.h>
#include<conio.h>
void main()
{
	int a[3],b[3],c[3],i,j,*p,temp;
	clrscr();
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		cout<<"Enter A["<<i<<"] : ";
		cin>>a[i];
	}
	cout<<"\n\nPrint address :";
	for(i=0;i<3;i++)
	{
		cout<<"\nAddress of A["<<i<<"] : "<<a[i]<<" Address : "<<p;
	}
	cout<<"\n\n\nPrint Assending order:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nA["<<i<<"] : "<<a[i];
	}
	cout<<"\n\n\nPrint Desending order:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nA["<<i<<"] : "<<a[i];
	}
	cout<<"\n\n\nPut another values:\n";
	for(i=0;i<3;i++)
	{
		cout<<"Enter B["<<i<<"] : ";
		cin>>b[i];
	}
	cout<<"\n\nPrint address :";
	for(i=0;i<3;i++)
	{
		cout<<"\nAddress of B["<<i<<"] : "<<b[i]<<" Address : "<<p;
	}
	cout<<"\n\n\nPrint Assending order:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nB["<<i<<"] : "<<b[i];
	}
	cout<<"\n\n\nPrint desending order:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]>a[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nB["<<i<<"] : "<<b[i];
	}
	cout<<"\n\n\nAddition :\n";
	for(i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<3;i++)
	{
		cout<<"\nC["<<i<<"] : "<<c[i];
	}
	getch();
}
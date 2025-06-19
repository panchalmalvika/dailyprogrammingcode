#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],temp;
	int i,j;
	clrscr();
	cout<<"\nEnter 10 words : ";
	for(i=0;i<10;++i)
	{
		getline(cin,a[i]);
	}
	for(i=0;i<9;++i)
	{
		for(j=0;j<9-i;++j)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\n\nIn lexicographical order : ";
	for(i=0;i<10;++i)
	{
		cout<<a[i];
	}
	getch();
}
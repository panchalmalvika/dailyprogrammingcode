#include<iostream.h>
#include<conio.h>
class array
{
	int a[3],b[3],j,i,temp;
	public:
		array()
		{
			for(i=0;i<3;i++)
			{
				cout<<"\nEnter a element "<<i<<" : ";
				cin>>a[i];
			}
			cout<<"\n\nPrint all value:\n";
			for(i=0;i<3;i++)
			{
				cout<<"\nA["<<i<<"] : "<<a[i];
			}
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
			cout<<"\n\nAccending order:\n";
			for(i=0;i<3;i++)
			{
				cout<<"\nA["<<i<<"] = "<<a[i];
			}
		}
};
void main()
{
	clrscr();
	array a1;
	getch();
}
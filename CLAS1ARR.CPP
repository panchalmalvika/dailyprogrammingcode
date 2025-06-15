#include<iostream.h>
#include<conio.h>
class array
{
	int a[3],i;
	public:
		array()
		{
			for(i=0;i<3;i++)
			{
				cout<<"\nEnter a element "<<i<<" : ";
				cin>>a[i];
			}
			for(i=0;i<3;i++)
			{
				cout<<"\nA["<<i<<"] : "<<a[i];
			}
		}
};
void main()
{
	clrscr();
	array a1;
	getch();
}
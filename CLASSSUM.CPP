#include<iostream.h>
#include<conio.h>
class sumN
{
	int i,n;
	public:
		sumN()
		{
			cout<<"\nEnter a value: ";
			cin>>n;
			int sum=0;
			for(i=0;i<=n;i++)
			{
				sum=sum+i;
			}
			cout<<"\nSUM: "<<sum;
		}
};
void main()
{
	clrscr();
	sumN s1;
	getch();
}
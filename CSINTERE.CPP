#include<iostream.h>
#include<conio.h>
class sinterest
{
	int year,rate;
	double principle;
	public:
		sinterest()
		{
			cout<<"\nEnter principale: ";
			cin>>principle;
			cout<<"\nEnter rate: ";
			cin>>rate;
			cout<<"\naenter year: ";
			cin>>year;
		}
		void cal()
		{
			double s;
			s=principle*year*rate/100;
			cout<<"\nSimple interest: "<<s;
		}
};
void main()
{
	clrscr();
	sinterest s1;
	s1.cal();
	getch();
}
#include<iostream.h>
#include<conio.h>
class clock
{
	//object as function argument in c++
	int hrs;
	int mins;
	public:
		void inst(int h,int m)
		{
			hrs=h;
			mins=m;
		}
		void dist()
		{
			cout<<hrs<<"hours & ";
			cout<<mins<<"minutes"<<"\n";
		}
		void sum(clock,clock);
};
void clock::sum(clock t1,clock t2)
{
	mins=t1.mins+t2.mins;
	hrs=mins/60;
	mins=mins%60;
	hrs=hrs+t1.hrs+t2.hrs;
}
void main()
{
	clrscr();
	clock c1,c2,c3;
	c1.inst(3,55);
	c2.inst(3,45);
	c3.sum(c1,c2);
	cout<<"Time= ";  c1.dist();
	cout<<"Time= ";  c2.dist();
	cout<<"Time= ";  c3.dist();
	getch();
}
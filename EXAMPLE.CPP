#include<iostream.h>
#include<conio.h>
class abc
{
	int a,p;
	public:
	void getabc(int age,float per)
	{
		age=a;
		per=p;
		cout<<"\nValue of A: "<<age;
		cout<<"\nValue of B: "<<per;
	}
	void putabc()
	{
		cout<<"\nAddition: "<<a+p;
	}
};
void main()
{
	clrscr();
	abc a1;
	a1.getabc(20,2.5);
	a1.putabc();
	getch();
}
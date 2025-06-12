#include<iostream.h>
#include<conio.h>
class exam
{
	public:
	void test()
	{
		cout<<"\nMethod 1:";
	}
	void test(int a,int b)
	{
		cout<<"\nMethod 2:";
	}
	void test(int a)
	{
		cout<<"\nMethod 3:";
	}
};
void main()
{
	clrscr();
	exam e;
	e.test();
	e.test(10);
	e.test(10,20);
	getch();
}
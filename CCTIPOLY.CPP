#include<iostream.h>
#include<conio.h>
class tops
{
	public:
		void test()
		{
			cout<<"\nTest with no argument:";
		}
		void test(int a)
		{
			cout<<"\ntest with 1 argument:";
		}
		void test(int a,int b)
		{
			cout<<"\nTest with 2 argument:";
		}
};
void main()
{
	tops t1;
	clrscr();
	t1.test(10,20);
	t1.test(10);
	t1.test();
	getch();
}
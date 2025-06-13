#include<iostream.h>
#include<conio.h>
class tops
{
	int num;
	static int count;
	public:
		void geta()
		{
			num=++count;
		}
		void getaa()
		{
			cout<<"\nObject number: "<<num;
		}
		static void puta()
		{
			cout<<"\ncount: "<<count;
		}
};
int tops::count;
void main()
{
	clrscr();
	tops t1,t2;
	t1.geta();
	t2.geta();
	tops::puta();
	tops t3;
	t3.geta();
	tops::puta();
	t1.getaa();
	t2.getaa();
	t3.getaa();
	getch();
}

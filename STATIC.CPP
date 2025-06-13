#include<iostream.h>
#include<conio.h>
class tops
{
//static(take common name in c++)
	static int a;
	public:
		void geta()
		{
			cout<<"\nEnter a value of A: ";
			cin>>a;
		}
		void puta()
		{
			cout<<"\nA: "<<a;
		}
};
int tops::a;
void main()
{
	clrscr();
	tops t1,t2,t3;
	t1.geta();
	t2.geta();
	t3.geta();
	t1.puta();
	t2.puta();
	t3.puta();
	getch();
}
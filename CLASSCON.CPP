#include<iostream.h>
#include<conio.h>
class constant
{
	public:
	const int a;
		void geta()
		{
			cout<<"\nEnter a value of A: "<<a;
		}
};
void main()
{
	clrscr();
	constant c1;
	c1.geta(10);
	getch();
}
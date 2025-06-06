#include<iostream.h>
#include<conio.h>
class Person
{
	//Paramiterzed constructor in c++:
	double height;
	int age;
	double weight;
	public:
		Person(int a,double w,double h)
		{
			height=h;
			age=a;
			weight=w;
		}
		void Health()
		{
			cout<<"\nHeight: "<<height;
			cout<<"\nWeight: "<<weight;
			cout<<"\nAge: "<<age;
		}
};
void main()
{
	clrscr();
	Person p1(40,50,6);
	p1.Health();
	getch();
}
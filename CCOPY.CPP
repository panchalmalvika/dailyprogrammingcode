#include<iostream.h>
#include<conio.h>
class Person
{
	//copy constructor in c++:
	int weight,height,age;
	public:
		Person()
		{
			age=76;
			weight=77;
			height=55;
		}
		person(Person &c)
		{
			age=c.age;
			weight=c.weight;
			height=c.height;
		}
		void health()
		{
			cout<<"\nAge:"<<age;
			cout<<"\nWeight: "<<weight;
			cout<<"\nHeight: "<<height;
			cout<<"\nSum: "<<age+weight+height;
		}
};
void main()
{
	clrscr();
	Person p2;
	p2.health();
	getch();
}
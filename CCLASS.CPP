#include<iostream.h>
#include<conio.h>
class Student
{
	int rno;
	char *sname;
	public:
		void getData()
		{
			cout<<"\nEnter a name:";
			cin>>sname;
			cout<<"\nEnter a roll no.:";
			cin>>rno;
		}
		void putData()
		{
			cout<<"\nStudent Name:"<<sname;
			cout<<"\nRoll number:"<<rno;
		}
};
void main()
{
	Student s1;
	clrscr();
	s1.getData();
	s1.putData();
	getch();
}

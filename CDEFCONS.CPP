#include<iostream.h>
#include<conio.h>
class Student
{
	//default constructor in c++:
	char name[40];
	int j,c,cpp,to,per,rno;
	public:
		Student()
		{
			cout<<"\nEnter a name:";
			cin>>name;
			cout<<"\nEnter a student roll number:";
			cin>>rno;
			cout<<"\nEnter java marks:";
			cin>>j;
			cout<<"\nEnter c marks:";
			cin>>c;
			cout<<"\nEnter C++ marks:";
			cin>>cpp;
		}
		void info()
		{
			cout<<"\nStudent name:"<<name;
			cout<<"\nStdent roll number:"<<rno;
			to=j+c+cpp;
			cout<<"\nTotal marks:"<<to;
			per=to/3;
			cout<<"\nPercentage:"<<per;
		}
};
void main()
{
	clrscr();
	Student s1;
	s1.info();
	getch();
}
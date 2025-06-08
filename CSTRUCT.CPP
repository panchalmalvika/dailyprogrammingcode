#include<iostream.h>
#include<conio.h>
struct student
{
	int rollno,s1,s2,s3,s4,s5,total;
	char sname[50];
	double per;
};
void main()
{
	struct student s;
	clrscr();
	cout<<"\nEnter a student name:";
	cin>>s.sname;
	cout<<"\nEnter a Roll no. of student:";
	cin>>s.rollno;
	cout<<"\nEnter Maths Marks of student:";
	cin>>s.s1;
	cout<<"\nEnter C++ marks of student:";
	cin>>s.s2;
	cout<<"\nEnter english marks of student:";
	cin>>s.s3;
	cout<<"\nEnter java marks of student:";
	cin>>s.s4;
	cout<<"\nEnter C marks of student:";
	cin>>s.s5;

	s.total=s.s1+s.s2+s.s3+s.s4+s.s5;
	s.per=s.total/5;

	if(s.per>=85)
	{
		cout<<"\nDistiction:";
	}
	else if(s.per>=75)
	{
		cout<<"\nFirst class";
	}
	else if(s.per>=60)
	{
		cout<<"\nsecond class";
	}
	else if(s.per>=50)
	{
		cout<<"\nPass class";
	}
	else
	{
		cout<<"\nfail";
	}

	cout<<"\nstudent name: "<<s.sname;
	cout<<"\nstudent roll no: "<<s.rollno;
	cout<<"\nmaths marks: "<<s.s1;
	cout<<"\nc++ marks: "<<s.s2;
	cout<<"\nenglish marks: "<<s.s3;
	cout<<"\njava marks: "<<s.s4;
	cout<<"\nc marks: "<<s.s5;
	cout<<"\nTotal marks: "<<s.total;
	cout<<"\npercentage of  marks: "<<s.per;
	getch();
}
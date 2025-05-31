#include<stdio.h>
#include<conio.h>
union student
{
	int rollno,s1,s2,s3,s4,s5,total,*p;
	char sname[50];
	double per;
};
void main()
{
	struct student s;
	clrscr();
	printf("\nEnter a student name:");
	gets(s.sname);
	printf("\nEnter a Roll no. of student:");
	scanf("%d",&s.rollno);
	printf("\nEnter Maths Marks of student:");
	scanf("%d",&s.s1);
	printf("\nEnter C++ marks of student:");
	scanf("%d",&s.s2);
	printf("\nEnter english marks of student:");
	scanf("%d",&s.s3);
	printf("\nEnter java marks of student:");
	scanf("%d",&s.s4);
	printf("\nEnter C marks of student:");
	scanf("%d",&s.s5);

	s.total=s.s1+s.s2+s.s3+s.s4+s.s5;
	s.per=s.total/5;

	if(s.per>=85)
	{
		printf("\nDistiction:");
	}
	else if(s.per>=75)
	{
		printf("\nFirst class");
	}
	else if(s.per>=60)
	{
		printf("\nsecond class");
	}
	else if(s.per>=50)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nfail");
	}

	printf("\nstudent name: %s",s.sname);
	printf("\nstudent roll no: %d",s.rollno);
	printf("\nmaths marks: %d",s.s1);
	printf("\nc++ marks: %d",s.s2);
	printf("\nenglish marks: %d",s.s3);
	printf("\njava marks: %d",s.s4);
	printf("\nc marks: %d",s.s5);
	printf("\nTotal marks: %d",s.total);
	printf("\npercentage of  marks: %lf",s.per);
	getch();
}
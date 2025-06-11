#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int s1,s2,s3,rono,total;
	char sname[50];
	double per;
	clrscr();
	fp=fopen("student info.txt","w");
	printf("\nEnter a student name:");
	gets(sname);

	printf("\nEnter roll number of the student:");
	scanf("%d",&rono);

	printf("\nEnter student java marks:");
	scanf("%d",&s1);

	printf("\nEnter student c++ marks:");
	scanf("%d",&s2);

	printf("\nEnter student c marks:");
	scanf("%d",&s3);

	total=s1+s2+s3;
	per=total/3;

	printf("\nstudent information:");
	printf("\nStudent name: %s",sname);
	printf("\nStudent roll no: %d",rono);
	printf("\ntotal marks: %d",total);
	printf("\nPercentage of the student: %lf",per);
	fclose(fp);

	fp=fopen("student info.txt","r");
	printf("\nstudent information:");
	printf("\nStudent name: %s",sname);
	printf("\nStudent roll no: %d",rono);
	printf("\ntotal marks: %d",total);
	printf("\nPercentage of the student: %lf",per);
	fclose(fp);

	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int enro,s1,s2,s3,total;
	double per;
	char *sname;
	clrscr();

	printf("\nEnter Student Name :");
	gets(sname);

	printf("\nEnter Enrollment Number:");
	scanf("%d",&enro);

	printf("\nMaths:");
	scanf("%d",&s1);

	printf("\nEnglish:");
	scanf("%d",&s2);

	printf("\nJava:");
	scanf("%d",&s3);

	total=s1+s2+s3;

	per=total/3;

	printf("\nStudent Name: %c",sname);
	printf("\nEnrollment Number: %d",enro);
	printf("\nTotal: %d",total);
	printf("\nPercentage: %lf",per);

	if(per>=85)
	{
		printf("\nDistintion");
	}
	else if(per>=70)
	{
		printf("\nFirst Class");
	}
	else if(per>=60)
	{
		printf("\nSecond Class");
	}
	else if(per>=40)
	{
		printf("\nPass Class");
	}
	else
	{
		printf("\nFail");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int rno,s1,s2,s3,total;
	double per;
	char *sname;
	clrscr();
	printf("\nEnter Student name: ");
	gets(sname);
	printf("\nEnter Roll no: ");
	scanf("%d",&rno);
	printf("\nEnter Marks of subject 1: ");
	scanf("%d",&s1);
	printf("\nEnter Marks of subject 2: ");
	scanf("%d",&s2);
	printf("\nEnter Marks of subject 3: ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;
	printf("\nStudent Name: %s",sname);
	printf("\nRoll No: %d",rno);
	printf("\nTotal: %d",total);
	printf("\nPercentage: %lf",per);
	if(per>=70)
	{
		printf("\nDistintion");
	}
	else if(per>=60)
	{
		printf("\nFirst class");
	}
	else if(per>=50)
	{
		printf("\nSecond class");
	}
	else if(per>=40)
	{
		printf("\nPass class");
	}
	else if(per>=30)
	{
		printf("\nFail");
	}
	getch();
}
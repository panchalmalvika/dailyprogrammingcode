#include<stdio.h>
#include<conio.h>
struct array
{
	int b[3],i;
};
void main()
{
	struct array a;
	clrscr();
	for(a.i=0;a.i<3;a.i++)
	{

			printf("\nEnter a value:");
			scanf("%d",&a.b[a.i]);


	}
	for(a.i=0;a.i<3;a.i++)
	{
		printf("\nA[%d]: %d",a.i,a.b[a.i]);
	}
	getch();
}
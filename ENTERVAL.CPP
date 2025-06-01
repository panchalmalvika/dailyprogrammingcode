#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,space,count;
	clrscr();
	printf("Enter number of row\n");
	scanf("%d",&a);
	space=a;
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=b;c++)
		{
			printf("  *  ");
			if(b>1 && count<c)
			{
				printf(" ");
				count++;
			}
		}
		printf("\n");
		space--;
		count=1;
	}
	getch();
}
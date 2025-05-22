#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b[4],c,temp;
	clrscr();
	for(a=0;a<4;a++)
	{
		printf("\nEnter value %d:",a);
		scanf("%d",&b[a]);
	}
	printf("\nPrint all value:");
	for(a=0;a<4;a++)
	{
		printf("\nB[%d]: %d",a,b[a]);
	}
	printf("\n\nAcending order:\n");
	for(a=0;a<4;a++)
	{
		for(c=0;c<4;c++)
		{
			if(b[a]<b[c])
			{
				temp=b[a];
				b[a]=b[c];
				b[c]=temp;
			}
		}
	}
	for(a=0;a<4;a++)
	{
		printf("\nA[%d]: %d",a,b[a]);
	}
	printf("\n\ndesending order:\n");
	for(a=0;a<4;a++)
	{
		for(c=0;c<4;c++)
		{
			if(b[a]>b[c])
			{
				temp=b[a];
				b[a]=b[c];
				b[c]=temp;
			}
		}
	}
	for(a=0;a<4;a++)
	{
		printf("\nA[%d]: %d",a,b[a]);
	}
	getch();
}
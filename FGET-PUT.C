#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char sinfo[500];
	clrscr();
	fp=fopen("myself.txt","w");
	printf("\nEnter the your full information:");
	gets(sinfo);

	fputs(sinfo,fp);
	fclose(fp);
	fp=fopen("myself.txt","r");
	while(fgets(sinfo,500,fp)!=NULL)
	{
		printf("%s",sinfo);
	}
	fclose(fp);
	getch();

}
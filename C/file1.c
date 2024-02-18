#include<stdio.h>


int main()
{
	FILE *f;
	FILE *fp;
	char ch;
	//f=fopen("even.c","r");
	fp=fopen("eve.txt","w");

	while(1)
	{
		ch=fgetc(stdin);
		if(ch=='\n')
			break;

		fprintf(fp,"%c",ch);
	}
	//fclose(f);
	fclose(fp);
}

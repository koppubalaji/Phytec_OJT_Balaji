

#include<stdio.h>
#include<string.h>


void status(char st,char str2[10])
{

	int len=strlen(str2)/2;
	//printf("%d",len);
	for(int i=0;i<len;i++)
	{
		st=str2[i];
		str2[i]=str2[strlen(str2)-i-1];
		str2[strlen(str2)-i-1]=st;
		
		
	}


	printf("the string transverse\n");

	for(int i=0;str2[i]!='\0';i++)
	{
		printf("%c",str2[i]);
	}
}


int main()
{
	char st;
	char str2[10]="balaji";

	status(st,str2);
}



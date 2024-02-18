#include<stdio.h>


int main()
{
	FILE *fp;
	fp=fopen("a.txt","r");
	char c;
	int count=0;
	while(1)
	{
		c=getc(fp);
		if(c==EOF)
		{
			break;
		}
		else
		{
			if(c=='\n')
			{
			count++;
			}
		}
	}
	printf("The number of lines : %d",count);
}	

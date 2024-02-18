#include<stdio.h>

int getnumberofchars(FILE *fp){

	int count=0;
	char c;
	rewind(fp);
	while(1)
	{
		c=getc(fp);
		if(c==EOF)
			break;
		else
			if(c!='\n')
				count++;
	}
	return count-1;
}

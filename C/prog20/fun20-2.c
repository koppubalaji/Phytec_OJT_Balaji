
#include<stdio.h>

int getnumberofwords(FILE *fp){

	int count=0;
	char c;
	rewind(fp);
	while(1)
	{
		c=getc(fp);
		if(c==EOF)
			break;
		else
			if(c=='\n'|| c==' ')
				count++;
	}
	return count-1;
}

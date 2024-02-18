

#include<stdio.h>
#include<stdlib.h>




int getnumberoflines(FILE *fp){

	int count=0;
	char c;
	rewind(fp);
	while(1)
	{
		c=getc(fp);
		if(c==EOF)
			break;
		else
			if(c=='\n')
				count++;
	}
	return count;
}

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
int main(int argc,char *argv[])
{
	int opt,r1,r2,r3;
	FILE *fp;
	fp=fopen("argv[arc-1]","r");
	while((opt=getopt(argc,argv,"abc"))!=-1)
		
	{
		switch(opt){
			case 'a':
				r1=getnumberoflines(fp);
				//printf("IN A");
				printf("%d ",r1);
		       		break;	    

			case 'b':
				r2=getnumberofwords(fp);
				//printf("IN B");
				printf("%d ",r2);
				break;	       
			case 'c':
				r3=getnumberofchars(fp);
				//printf("IN C");
				printf("%d ",r3);
		       		break;	       
			case '?':
			       	printf("Invalid Command");
		       		break;	 
		}
	}


	exit(0);
}	



#include<stdio.h>
#include<stdlib.h>
#include"header20.h"





int main(int argc,char *argv[])
{
	int opt,r1,r2,r3;
	FILE *fp;
	fp=fopen("file3.c","r");
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

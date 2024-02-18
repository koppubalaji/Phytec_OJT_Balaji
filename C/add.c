#include<stdio.h>

int main(){

//	int a,avg;
//	scanf("%d",&a);
	FILE *fptr;
	FILE *fp;
	char c;
	fptr=fopen("even.c","r");
	fp=fopen("eve.txt","w");
	if(fptr==NULL)
		printf("File doesnt exist\n");
	else
	{
		while(1)
		{
			c=getc(fptr);
			if(feof(fptr)==0)
				fprintf(fp,"%c",c);
			else
				break;
		}
		fclose(fptr);
		fclose(fp);
	}

	



}

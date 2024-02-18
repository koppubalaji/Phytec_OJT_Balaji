




#include<stdio.h>


int main()
{
	FILE *fp,*fp1;
	int id=02;
	char name[10]="balaji";
	fp=fopen("file3.c","r");
	fp1=fopen("file4.c","w+");

	if(fp==NULL)
	{
		printf("FILE NOT PRESENT");
	}

	
//fprintf,fputc,fputs





	/*else{
		printf("File opened\n");	
		fprintf(fp,"%s,%d",name,id);	
		fputs("bjsdzcnm",fp);
		fputc('b',fp);
	}








//fgetc





	/*do 
	{
	char c=fgetc(fp);
	if(feof(fp))
		break;
	printf("%c",c);
	}while(1);*/



//fgets,fseek,rewind,ftell




/*	char c[15];
	if(fgets(c,10,fp)!=NULL){
		puts(c);
		printf("\n");
		printf("%s\n",c);
	}
	//fseek(fp,-11,1);
	//rewind(fp);
	printf("%d\n",ftell(fp));
	printf("%s",fgets(c,10,fp));
*/




//fscanf

/*	char s1[10];
	char s2[10];
	char s3[10];
	int s4;
	fputs("HI IAM BALAJI 7",fp1);
	rewind(fp1);
	fscanf(fp1,"%s %s %s %d",s1,s2,s3,&s4);

	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3);
	printf("%d\n",s4);

*/

	fclose(fp1);
	fclose(fp);


}

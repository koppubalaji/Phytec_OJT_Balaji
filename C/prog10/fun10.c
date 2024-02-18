
#include<stdio.h>
#include<string.h>


void strreplace(char *source,char *b,char*c)
{
	char *sub_source=strstr(source,b);

	if(b==NULL)
	{
		return;
	}


	
	int len1,len2;
	len1=strlen(b);
	len2=strlen(c);
	
	if(len1<len2)	
		memmove(sub_source+len2,sub_source+len1,strlen(sub_source)-len1+1);
	else
		memmove(sub_source+len2,sub_source+len1,strlen(sub_source)-len2+1);
	


	int i;
		
	
	for(i=0;i<len2;i++){
		source[i]=c[i];
	}

	printf("%s",source);
}


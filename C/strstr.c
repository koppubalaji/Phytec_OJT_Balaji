

#include<stdio.h>
#include<string.h>




int main()
{
	char a[]="hello this is c program";
	char b[]="this";

	char *c=strstr(a,b);
	
	printf("%s",c);
}



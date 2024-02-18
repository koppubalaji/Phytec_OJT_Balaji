#include<stdio.h>
#include<string.h>



void fun3(char a[20])
{
	int i,j,len=0;
	char x;
	int length;
	len=strlen(a);
	length=len;
	for(i=0;i<(len/2);i++){
		
		for(j=length-1;j>=length-1;j--)
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
	
		
		}
		length--;

	}
	a[len]='\0';
	printf("%s",a);
}

#include<stdio.h>

int main()
{
	char str[]="rama is a good boy";
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==32)
		{
			str[i]=',';
		}
	}
	printf("%s",str);
}

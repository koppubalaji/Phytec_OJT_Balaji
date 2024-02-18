

#include<stdio.h>


int main()
{
	char str[]="123asd35dfA45#$%";

	char a[10];
	int j=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] >=65 & str[i] <=91 || str[i]>=97 & str[i] <=122)
		{
			a[j]=str[i];
			j++;
		}
	}
	a[j]='\0';
	printf("%s",a);
}



#include<stdio.h>

int main()
{
	char str[]="123asd35dfA45#$%";
	static char str1[10];
	int j=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] >=65 && str[i]<=90 | str[i]>=97 && str[i] <= 122)
		{
			str1[j]=str[i];
			j++;
		}
	}
	printf("the string is %s",str1);
}

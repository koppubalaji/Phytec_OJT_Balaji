

#include<stdio.h>


void unique(char str[40])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=33 && str[i] <=47 || str[i] >=58 && str[i]<=64  || str[i] >=91 && str[i]<=96)
		{
			printf("%c",str[i]);
		}
	}
	printf("\n");
}

void num(char str[40])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] >=48 && str[i]<=57)
			printf("%c",str[i]);
	}
	printf("\n");
}

void chara(char str[40])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] >=65 && str[i]<=90 || str[i] >=97 && str[i] <=122)
			printf("%c",str[i]);
	}
	printf("\n");
}
int main()
{
	char str[40]="dkjrsgnj49873257@##%$^";
	while(1)
	{
		printf("Enter u for unique n for num c for char \n");

		char a;
		scanf("%c",&a);
		__fpurge(stdin);
		switch(a)
		{
			case 'u':unique(str);
		       		break;

			case 'n':num(str);
		       		break;
			case 'c':chara(str);
		       		break;
			default:printf("Invalid option\n");
				break;
		}
	}
}

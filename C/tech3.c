
#include<stdio.h>


int main()
{
	char a[6]="a1b2c3";
	int d=4;

	static char b[10];

	int count=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(i%2==0)
		{
			char c=a[i];
			int e=a[i+1]-48;
			//printf("%c\n",c);
			//printf("%d\n",e);
			for(int j=0;j<e;j++)
			{
				b[count]=c;
				count++;
			}
		}
	}
	for(int i=0;i<10;i++)
		printf("%c\n",b[i]);
}

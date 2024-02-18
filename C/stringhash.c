

#include<stdio.h>

#include<string.h>
int main()
{
	char str[20]="santosh";

	int len=strlen(str);	
	int arr[len];


	for(int i=0;str[i]!='\0';i++)
	{
		int count=1;
		for(int j=0;str[j]!='\0';j++)
		{
			if(str[i]==str[j] && i!=j)
			{
				//arr[i]=1;
				arr[j]=1;
				count++;
			}
		}
		if(arr[i]!=1)
			printf("%c = %d\n",str[i],count);
	}
}

	


#include<stdio.h>

int power(int rem,int place)
{
	int result=1;
	if(rem==0)
		return 0;
	else if(place==0)
		return 1;
	else
	{
		for(int i=0;i<place;i++)
		{
			result=result*2;
		}

		return result;
	}
}

int main()
{
	int bin=1101;

	int res=0,rem,place=0;
	while(bin)
	{
		rem=bin%10;

		res=res+power(rem,place);
		place++;

		bin=bin/10;

	}
	printf("%d",res);
}

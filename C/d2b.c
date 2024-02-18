
#include<stdio.h>


int main()
{
	int dec=10;

	int place=1;
	int res=0,rem;
	while(dec)
	{
		rem=dec%2;

		res=res+rem * place;

		place=place*10;
		dec=dec/2;

	}
	printf("%d",res);
}

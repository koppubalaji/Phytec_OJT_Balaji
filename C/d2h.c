

#include<stdio.h>


int main()
{

	int dec=10;
	printf("%X",dec);
	int rem,res=0,place=1;
	while(dec)
	{
		rem=dec%16;
		res=res+rem * place;
		dec=dec/16;
		place=place+10;
	}

	printf("%X",res);
}

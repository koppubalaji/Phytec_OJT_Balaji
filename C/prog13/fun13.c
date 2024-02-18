#include<stdio.h>


void fun13(int a,int b,int c)
{
	int res;
	
	res=a>b?(a>c?a:c):(b>c?b:c);

	printf("%d",res);

}

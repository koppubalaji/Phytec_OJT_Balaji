#include<stdio.h>



void fun14(int a,int b)
{

	a=a^b;
	b=a^b;
	a=a^b;

	printf("%d\n%d\n",a,b);
}

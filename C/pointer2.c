#include<stdio.h>


void fun1(int x,char y)
{
	printf("%d\n %c\n",x,y);
}



int main()
{
	int x=10;
	char y='b';

	void (*fun1_ptr)(int,char)=fun1;

	fun1_ptr(x,y);
}

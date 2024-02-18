

#include<stdio.h>

void fun1()
{
	printf("function 1\n");
}
void fun2()
{
	printf("function 2\n");
}
void hi(void (*fun)())
{
	fun();
}


int main()
{
	hi(fun1);
	hi(fun2);
}

#include<stdio.h>


void fun1(int a)
{
	printf("the value is %d\n",a++);
}


int main()
{
	static int a=5;

	void (*fun1_ptr)(int)=&fun1;

	(*fun1_ptr)(a);
}

#include<stdio.h>


void fun(int x)
{
	x++;
	printf("%d\n",x);
}


void fun1(int *y)
{
	(*y)++;
	printf("%d\n",*y);
}


int main()

{
	int a=5;

	fun(a);
	printf("Without referencing\n");
	printf("%d\n",a);
	fun1(&a);
	printf("With referencing\n");
	printf("%d\n",a);
	
}

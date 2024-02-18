

#include<stdio.h>
void hi()
{
	int a=10;
	printf("%d",a);
	hello(a);
}


void hello(int b)
{
	printf("%d",b);
}

int main()
{
	hi();
	//hello();
}

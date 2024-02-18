
#include<stdio.h>





int rec(int n)
{

	static int d=1;
	printf("%d\n",n);
	printf("%d\n",d);
	d++;
	if(n>1)
		rec(n-1);

	printf("%d\n",d);
}

int main()
{
	rec(4);
}

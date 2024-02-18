

#include<stdio.h>


/*int fib(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;

	else
		return fib(n-1)+fib(n-2);
}


int main()
{
	int n=10;
	for(int i=0;i<=n;i++)
		printf("%d\n",fib(i));
}*/


int main()
{
	int n=10,n1=0,n2=1,n3;
	printf("%d\n",n1);
	printf("%d\n",n2);
	while(n>0)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
		n--;
	}
}




#include<stdio.h>


int main()
{
	int a=0;
	int b=1;


	int n,c;
	scanf("%d",&n);

	printf("%d",a);
	printf("%d",b);
	while(a+b<n)
	{

		
		c=a+b;
		printf("%d\n",c);

		a=b;
		b=c;

	}
}

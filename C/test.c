


#include<stdio.h>
int f(int *x,int c)
{
	c=c-1;
	if(c==0)
		return 1;
	*x=*x+1;
	printf("%d\n",*x);
	return f(x,c)*(*x);
}
int main()
{
	int p=5;
	printf("%p",p);
	printf("%d",f(&p,p));
}



#include<stdio.h>


int recursion(int n)
{
	if(n==0)
		return 1;
	else
		return n*recursion(n-1);
}
int main()
{
	int n=5,r;
	r=recursion(n);
	printf("%d",r);
}

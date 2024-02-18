


#include<stdio.h>
int rec(int n,int r)
{
	if(n==r||r==0)
		return 1;

	else
	{
		return rec(n-1,r-1)+rec(n-1,r);
	}
}
int main()
{
	int n,r;

	scanf("%d",&n);
	scanf("%d",&r);

	printf("%d",rec(n,r));
}

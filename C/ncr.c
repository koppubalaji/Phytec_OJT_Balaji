

#include<stdio.h>




int fact(int n)
{

	int fac=1;
	if(n==0)
		return 1;
	else
	{
		for(int i=1;i<=n;i++)
		{
			fac=fac*i;
		}
	return fac;
	}
}




int main()
{
	int n;
	int r,ncr;
	scanf("%d",&n);
	scanf("%d",&r);
	int t1,t2,t3,t4;
	t1=fact(n);
	t2=fact(r);
	t3=fact(n-r);
	t4=t1/(t2*t3);
	printf("%d",t4);
}

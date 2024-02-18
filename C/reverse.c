

#include<stdio.h>



int res,rem=0;
int fun(int num)
{
	if(num)
	{
		
		res=num%10;
		rem=rem*10+res;
		fun(num/10);
	}
	else
	{
		return rem;
	}
}



int main()
{
	int n=208;
	int rem=0,res;
	printf("%d",fun(n));
}

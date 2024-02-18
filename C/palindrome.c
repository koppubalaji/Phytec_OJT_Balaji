

#include<stdio.h>



int main()
{
	int n;
	scanf("%d",&n);
	int num;
	num=n;
	int rem,result=0;
	while(n)
	{
		rem=n%10;
		result=result*10+rem;
		n=n/10;
	}
	if(num==result)
	{
		printf("palindrome");
	}
	else
		printf("not");
}


#include<stdio.h>


int main()
{

	int num,num1,res=0,rem;
	scanf("%d",&num);

	num1=num;
	while(num)
	{
		rem=num%10;
		res=res+(rem*rem*rem);
		num=num/10;
	}


	if(res==num1)
		printf("armstrong");
	else
		printf("not a arm");
}


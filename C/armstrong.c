

#include<stdio.h>
#include<math.h>



int main()
{
	printf("%f",pow(2,4));
	int num=153;
	int result=0;	
	int num1=num;	
	int n;
	while(num)
	{
		n=num%10;
		result=result+(n*n*n);
		num=num/10;
	}
	if(result==num1)
	{
		printf("armstrong");
	}
	else
		printf("not armstrong");
}

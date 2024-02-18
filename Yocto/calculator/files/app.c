#include<stdio.h>
#include"mymath.h"



int main()
{
	int a,b;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);


	printf("Addition of two numbers : %d\n",add(a,b));
	printf("Subtraction of two numbers : %d\n",sub(a,b));
	printf("Multiplication of two numbers %d\n: ",mul(a,b));
	printf("division of two numbers : %d\n",div(a,b));
}





#include<stdio.h>
#include<math.h>
/*int sum(int n)
{
	
	if(n>0)
	{
		return sum(n-1)+n;
	}
*/

/*int fact(int n)
{
	if(n>1)
	{
		return fact(n-1)*n;
	}


}*/


int exp(int n,int m)
{
	int i;
	if(i<=m)
	{
		i++;
		;
		exp(n,m);
	}
	return sum;
}

int main()
{
	int n,m;

	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter m: ");
	scanf("%d",&m);

	//printf("sum is : %d",sum(n));
	//printf("fact is : %d\n",fact(n));
	printf("exponent is : ",exp(n,m));
}

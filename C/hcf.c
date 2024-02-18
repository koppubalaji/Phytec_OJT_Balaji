



#include<stdio.h>


int main()
{


	int n1,n2;

	scanf("%d",&n1);
	scanf("%d",&n2);

	int count=0;
	int k=n1>n2?n1:n2;
	for(int i=k;i>=1;i--)
	{
		if(n1%i==0 && n2%i==0)
		{
			printf("%d\n",i);
			break;
		//	count++;
		}
		
	}
}



#include<stdio.h>


int main()

{
	int num;
	scanf("%d",&num);



	for(int i=2;i<num;i++)
	{
		int count=0;
		if(num%i==0)
		{
			for(int j=2;j<i;j++)
			{
				if(i%j==0 && i!=j)
					count++;
			}
			if(count==0)
				printf("%d\n",i);
		}
	}
}

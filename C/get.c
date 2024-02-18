#include<stdio.h>
#include<math.h>


int main()
{
	int a,i,count=0,b=2;
	scanf("%d",&a);


	//printf("%d",a/4);	
	if(a%2!=0)
		printf("NOT A POWER OF 2");
	else
	{
		for(i=1;i<=a/2;i++)
		{
			b=b*2;
			if(b==a)
				count++;
			
		}
	

	if(count==1)
		printf("POwer of 2");
	else
		printf("not a power of 2");
		
	}	




}



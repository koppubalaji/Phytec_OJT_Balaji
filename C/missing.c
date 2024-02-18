#include<stdio.h>

int main()
{
	int a[11];
	int size;
	printf("Enter size: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	int k;
	for(int i=0;i<size-1;i++)
	{
		if((a[i+1]-a[i])==2)
		{
			printf("The missing element is %d\n",a[i+1]-1);
		}
		if((a[i+1]-a[i])>=3)
		{
			k=a[i+1]-a[i];
			for(int j=1;j<k;j++ )
			{
				int t=a[i+1]-j;
				printf("The missing element is %d\n",t);
			}
		}


		
		

	}
}  

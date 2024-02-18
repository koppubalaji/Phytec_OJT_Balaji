
#include<stdio.h>


int main()
{
	int arr[100];
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);

	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int y=arr[0]*arr[1];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i!=j && y<arr[i]*arr[j])
				y=arr[i]+arr[j];
		}

	}
	printf("%d",y);
}

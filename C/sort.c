

#include<stdio.h>



int main()
{

	int arr[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}


	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
}

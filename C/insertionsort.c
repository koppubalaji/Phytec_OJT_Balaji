

#include<stdio.h>

int main()
{
	int arr[7]={6,10,36,5,334,729,23};
	int temp=0;
	
	for(int i=0;i<7;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(int i=0;i<7;i++)
	{
		int t=i;
		if(arr[t]>arr[t+1])
		{
			temp=arr[t+1];
			arr[t+1]=arr[t];
			arr[t]=temp;
		

		for(int j=t-1;j>=0;j--)
		{
			if(arr[t]<arr[j])
			{
				temp=arr[t];
				arr[t]=arr[j];
				arr[j]=temp;
				t--;
			}
		}
		}	
		
	for(int i=0;i<7;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	}
	for(int i=0;i<7;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

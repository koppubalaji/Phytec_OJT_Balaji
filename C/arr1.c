

#include<stdio.h>



int main()
{
	int arr[6]={1,2,3,4,5,5};

	int temp=arr[6-1];
	int index;
	int j=5;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==temp)
		{
			index=i;
			j--;
		}
	}

	for(int i=4;i>=0;i--)
	{
		if(i!=index)
		{
			arr[j]=arr[i];
			j--;
		}
	}
	arr[0]=temp;
	for(int i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}	



}

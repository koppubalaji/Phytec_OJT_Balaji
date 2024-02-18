//linear search is a searching algorithm that starts at one end and traverses through the array.if found returns.

#include<stdio.h>

int main()
{
	int arr[10]={2,4,3,5,8,6,1,10,23,56};

	int r=10;

	for(int i=0;i<10;i++)
	{
		if(r==arr[i])
		{
			printf("Element %d is found at index %d",r,i);
		}
	}
}

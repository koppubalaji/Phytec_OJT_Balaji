#include<stdio.h>


int main()
{
	int arr[]={1,3,4,7};
	int max=8;
	static int arr1[10];
	for(int i=0;i<4;i++)
	{
		arr1[arr[i]]=1;
	}
	printf("The missing elements are : ");
	for(int i=1;i<=max;i++)
	{
		if(arr1[i]==0)
		{
			printf("%d",i);
		}
	}
}

		
		


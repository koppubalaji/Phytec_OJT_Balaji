#include<stdio.h>

int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,1,0,5};

	for(int i=0;i<5;i++)
	{
		int count=0;
		for(int j=0;j<5;j++)
		{
			if(arr1[i]==arr2[j])
			{
				count++;
			}
		}
		if(count==0)
			printf("The missing number is %d",arr1[i]);
	}
}

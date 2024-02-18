#include<stdio.h>

int main()
{
	int arr[100];
	int arr1[100];
	int size;
	printf("enter the size : \n");
	scanf("%d",&size);
	printf("Enter the elements : ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	int location;
	printf("Enter the location : \n");
	scanf("%d",&location);
	int element;
	printf("Enter the element to be inserted : \n");
	scanf("%d",&element);

	int j=0;
	for(int i=0;i<size+1;i++)
	{
		if(i==location)
		{
			arr1[i]=element;
		}
		else
		{
			arr1[i]=arr[j];
			j++;
		
		}
	}
	printf("Elements are : ");
	for(int i=0;i<size+1;i++)
	{
		printf("%d",arr1[i]);
	}

}	



#include<stdio.h>



int main()
{
	int arr[10];

	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	int num;
	printf("enter num u want to find index: ");
	scanf("%d",&num);


	for(int i=0;i<10;i++)
	{
		if(arr[i]==num)
			printf("%d",i);
	}

	

}

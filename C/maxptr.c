

#include<stdio.h>


int main()
{
	int arr[5]={3,4,5,6,7};

	int *ptr;

	ptr=arr;
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(max< *(ptr+i))
		{
			max=*(ptr+i);
		}
	}
	printf("%d",max);
}

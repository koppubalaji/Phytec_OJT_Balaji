

#include<stdio.h>


int main()
{

	int arr[5]={1,2,3,6,5};

	int *p;

	p=arr;

	printf("%d",*(p+2));
	for(int i=0;i<5;i++)
	{
		printf("%p\n",(p+i));
	}
}

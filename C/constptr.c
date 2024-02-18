

#include<stdio.h>


int main()
{
	int arr[5]={4,5,6,7,8};

	int * const ptr=arr;
	const int * p=arr;



	printf("%d %p\n",*ptr,ptr);
	printf("%d %p\n",*p,p);
//	*p=10;
	
//	printf("%d %p\n",*p,p);
	//ptr++;
	//printf("%d %p\n",*ptr,ptr);

}

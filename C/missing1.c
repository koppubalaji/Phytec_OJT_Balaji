

#include<stdio.h>


int main()

{
	int arr[10]={3,7,4,9,12,6,1,11,2,10};
	static int a[12];

	int l=arr[0];
	for(int i=1;i<10;i++)
	{
		if(l<arr[i])
		{
			l=arr[i];
		}
	}
		
	int *p;
	p=arr;

	for(int i=0;i<10;i++)
	{
		a[*(p+i)]=1;
	}


	for(int i=1;i<l;i++)
	{
		if(a[i]==0)
			printf("The missing element is : %d\n",i);
	}



}

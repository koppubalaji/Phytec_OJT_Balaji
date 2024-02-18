// binary search is a searching algorithm in a sorted array by repeatedly dividing the search interval in half.

#include<stdio.h>


int binarysearch(int arr[],int start,int length,int r)
{
	int m;
	while(start<=length)
	{
		m=start+(length-start)/2;
		if(arr[m]==r)
		{
			return m;
		}
		if(arr[m]<r)
		{
			start=m+1;
		}
		else
		{
			length=m-1;
		}
	}
}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};

	int r=6;

	int m;

	int length=sizeof(arr)/sizeof(int);

	int result=binarysearch(arr,0,length,r);

	printf("%d",result);
	


}

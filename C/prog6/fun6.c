
#include<stdio.h>



int fun6(int arr[5],int arr1[5])
{
	int sum=0;
	for(int i=0;i<5;i++){
	

		sum=sum+arr[i]+arr1[i];
	}
	return sum;
}

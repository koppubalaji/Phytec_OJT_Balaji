

#include<stdio.h>



int main()
{
	int arr[7]={1,2,3,4,5};

	int index=1;

	int element=6;

	int count=0;

	for(int i=0;arr[i]!='\0';i++)
	{
		count++;
	}
	

	int j=count+1;
	for(count;count >=index;count--)
	{
		arr[j]=arr[count];
		j--;
	}
	arr[index]=element;
	for(int i=0;arr[i]!='\0';i++)
	{
		printf("%d\t",arr[i]);
	}
	
}

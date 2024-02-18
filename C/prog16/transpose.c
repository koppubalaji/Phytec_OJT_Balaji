

#include<stdio.h>
#include"header16.h"


int main()
{
	int arr[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	fun16(arr);
}


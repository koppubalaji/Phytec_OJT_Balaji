#include<stdio.h>



void fun16(int arr[2][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}

}

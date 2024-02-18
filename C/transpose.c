



#define n 3
#define m 2
#include<stdio.h>


int main()
{
	int arr[n][n],transpose[m][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("**************\n");
	printf("MATRIX\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("**************\n");
	printf("TRANSPOSE OF MATRIX\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	printf("**************\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			transpose[i][j]=arr[j][i];
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}

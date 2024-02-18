#include<stdio.h>

int main()
{
	int arr[5]={1,3,4,5,6};
	printf("1,3,4,5,6\n");
	int a;
	while(1)
	{
		int count=0;
		printf("Enter a: ");
		scanf("%d",&a);
		for(int i=0;i<5;i++)
		{
			if(arr[i]>a)
				count++;
		}
	printf("%d\n",count);
	}
}

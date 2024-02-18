
#include<stdio.h>







int printarr(int a[10],int size,int k)
{
	for(int i=k;i<size;i++)
	{
		return a[i];
	}
	
}
int main()


{
	int a[10]={1,2,3,4,5,6,7,8,9,11};

	int size,r1;
	int i;
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		
		r1=printarr(a,size,i);
		printf("%d\n",r1);
	}
}




#include<stdio.h>



int main()
{
	int a[10]={3,6,8,8,10,8,15,15,15,20};


	static int t[21];

	for(int i=0;i<10;i++)
		
	{
		int temp=0;
		for(int j=0;j<10;j++)
		{
			if(i!=j && a[i]==a[j] && t[a[i]]==0)
			{
				temp++;
			}
		}

		t[a[i]]=1;
		if(temp>=1)
		{
			printf("No.of duplicates for %d are %d\n",a[i],temp+1);
		}
	}
}

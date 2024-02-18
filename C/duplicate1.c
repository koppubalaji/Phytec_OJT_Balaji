

#include<stdio.h>



int main()
{
	int a[10]={3,6,8,8,8,15,15,15,15,15};
	int len=sizeof(a)/sizeof(int);
	int lastduplicate=0;
	for(int i=0;i<9;i++)
	{
		if(a[i]==a[i+1] && a[i]!=lastduplicate)
		{
			for(int j=i+2;j<10;j++)
			{
				if(j==len-1 && a[i]==a[j])
					printf("no.of duplicates for %d are %d\n",a[i],j-i+1);
					
				if(a[i]!=a[j]){
					printf("no.of duplicates for %d are %d\n",a[i],j-i);
					break;
				}
			}
		}
		lastduplicate=a[i];

	}
}
			

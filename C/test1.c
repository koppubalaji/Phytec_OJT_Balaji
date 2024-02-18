#include<stdio.h>
#include<stdlib.h>

int fun(int a);








void logic(int s)
{
	char arr[3];
	int k,i=2;
	while(i>=0)
	{
		k=s%2;
		arr[i]=k;
		s=s/2;
		i--;
	}
	arr[3]='\0';
	for(int i=0;i<3;i++)
		printf("%c",arr[i]);
	printf("%s",arr);


}


int main()
{

	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	int sum=fun(a)+fun(b);
	logic(sum);
}
int fun(int a)
{
	int c,r=0,i=0;
        while(a)
        {
                int d=1;
                c=a%2;
                for(int j=1;j<=i;j++)
                        d=d*2;
                r=r+c*d;
                a=a/10;
                i++;
        }
        
	
	return r;
}




#include<stdio.h>









int p=1,f=1;
int e(int x,int n)
{
	int r;
	if(n==0)
		return 1;
	else{
		r=e(x,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
	}
}








int main()
{
	int x,n;

	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d",e(x,n));

}



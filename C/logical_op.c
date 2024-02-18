#include<stdio.h>



int main(){
	int a=10,b=20,sum;

	sum=a++>10 && ++b>20;


	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",sum);

	a=10,b=20,sum;
	sum=a++>10 && b++>20;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",sum);
	a=10,b=20,sum;
	sum=++a>10 && ++b>20;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",sum);
	a=10,b=20,sum;
	sum=++a>10 && b++>20;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",sum);
}

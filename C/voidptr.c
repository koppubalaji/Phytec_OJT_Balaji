

#include<stdio.h>



int main()
{
	int number=10;

	void *ptr=&number;

	//printf("%d",*ptr);	

	int *p;

	p=(int *)ptr;


	printf("%d",*p);	
}

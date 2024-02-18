

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *data;

	data=(int *)malloc(sizeof(int));

	*data=5;

	printf("%d",*data);
}

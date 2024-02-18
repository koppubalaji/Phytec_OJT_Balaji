#include<stdio.h>

int main()
{
	int arr[5];

	int *p;

	int (*ptr)[5];
//it parenthesis is not there for ptr it will become as array of 5 pointers
//this is because precedence of array subscript[] is higher and it 
//should be evaluated first.
//hence if we keep parenthesis
//it indicates that ptr is a pointer to array of 5 integers.
	p=arr;

	ptr=&arr;

	printf("%p %p\n",p,ptr);

	p++;
	ptr++;
//it jumps by 20 bytes because ptr refers to whole array i.e; 5*4=20 bytes
//0x14 is the difference which is in decimal 20 .
	printf("%p %p\n",p,ptr);
}

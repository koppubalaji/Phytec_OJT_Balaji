#include<stdio.h>

int fact(int a);


int fact(int a)
{
   
    if(a==0)
	    return 1;

    return a*fact(a-1);
}

int main()
{
	int a =5,b=10;
    	int c=fact(a);  // Call hi without passing any argument
	printf("%d",c);
    	return 0;
}


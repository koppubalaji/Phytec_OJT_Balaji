#include<stdio.h>

int add(int a,int b);


int add(int a,int b)
{
   
    if(b==0)
	    return a;
    return add(a+1,b-1);
}

int main()
{
	int a =10,b=10;
    	int c=add(a,b);  // Call hi without passing any argument
	printf("%d",c);
    	return 0;
}


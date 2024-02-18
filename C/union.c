


#include<stdio.h>
#include<string.h>
int main()
{
typedef union abc
{
	char c;
	int marks;
	char name[10];
}a;

a a1;
a1.c='h';
a1.marks=40;
strcpy(a1.name,"balaji");

printf("%c , %d , %s",a1.c,a1.marks,a1.name);

//printf("%ld",sizeof(a1));
}	

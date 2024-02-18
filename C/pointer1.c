

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct abc
{
	int marks;
	char name[10];
}a;
int main()
{
	a *b=(a*)malloc(sizeof(a));
	b->marks=10;
	strcpy(b->name,"balaji");
	printf("%d %s",b->marks,b->name);
}






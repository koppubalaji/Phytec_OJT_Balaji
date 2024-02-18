

#include<stdio.h>
#include<string.h>

struct member
{
	int marks;
	char name[10];
};

int main()
{
	struct member obj;

	struct member *ptr=&obj;


	ptr->marks=10;
	strcpy(ptr->name,"balaji");

	printf("%d %s\n",ptr->marks,ptr->name);
	printf("%d %s",(*ptr).marks,(*ptr).name);

}

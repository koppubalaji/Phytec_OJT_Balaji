

#include<stdio.h>
struct a
{
	int marks1;
	int marks2;
}var;

int main()
{
	var.marks1=10;
	var.marks2=20;
	printf("%d %d",var.marks1,var.marks2);
}

#include<stdio.h>


void palindrome(int num){
	int rev=0,rem=0,temp;
	temp=num;
	while(num){
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;	
	}
	if(rev==temp)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
}

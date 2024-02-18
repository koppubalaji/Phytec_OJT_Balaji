#include<stdio.h>


void armstrong(int num){

	int sum=0,rem,temp;
	temp=num;
	while(num){
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==temp)
		printf("Armstrong number\n");
	else
		printf("Not a Armstrong\n");
}


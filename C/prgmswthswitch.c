
#include<stdio.h>
//#include<stdlib.h>

int even(int num){
	if(num%2==0){
		return 1;
	
	}
	else{
		return 0;
	}
}

int prime(int num){
	int i,count=0;
	for(i=2;i<num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count>=1)
		printf("Not a Prime\n");
	else
		printf("Prime\n");
}		
int palindrome(int num){
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


int perfect(int num){

	int i,sum=0;
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num)
		printf("Perfect\n");
	else
		printf("Not a perfect\n");
	
}


int armstrong(int num){

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

int main(){


	int num,choice;
	while(choice){
	printf("1:Even or odd\n");
	printf("2:Prime\n");
	printf("3:Palindrome\n");
	printf("4:perfect\n");
	printf("5:armstrong\n");

	
	printf("Enter a choice : \n");
	scanf("%d",&choice);


	switch(choice){
		case 1:
			
			printf("Even or odd\n");
			scanf("%d",&num);
			if(even(num))
				printf("Even\n");
			else
				printf("Odd\n");
			break;
		case 2:
			printf("Prime or not prime\n");
			scanf("%d",&num);
			prime(num);
			break;
		case 3:
			printf("Palindrome or not\n");
			scanf("%d",&num);
			palindrome(num);
			break;
		case 4:
			printf("Perfect or not\n");
			scanf("%d",&num);
			perfect(num);
			break;

		case 5:
			printf("Armstrong or not\n");
			scanf("%d",&num);
			armstrong(num);
			break;
		case 0:
			printf("Exiting Program");
			exit(0);
		default:
			printf("Try Again");
	
	}
}
}

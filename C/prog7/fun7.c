#include<stdio.h>

#include<stdlib.h>


int fun7(int num)
{
	int rev=0,rem,remainder;
	while(num)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	while(rev){
		remainder=rev%10;
	
		switch(remainder){
			case 0:
				printf("ZERO\t");
				break;
			case 1:
				printf("ONE\t");
				break;
			case 2:
				printf("TWO\t");
				break;
			case 3:
				printf("THREE\t");
				break;
			case 4:
				printf("FOUR\t");
				break;
			case 5:
				printf("FIVE\t");
				break;
			case 6:
				printf("SIX\t");
				break;
			case 7:
				printf("SEVEN\t");
				break;
			case 8:
				printf("EIGHT\t");
				break;
			case 9:
				printf("NINE\t");
				break;
		}
		rev=rev/10;
}
}

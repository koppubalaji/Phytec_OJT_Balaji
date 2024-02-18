#include<stdio.h>


void perfect(int num){

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


#include<stdio.h>


int fun4(int num)


{

	int bitmask,res;

	int i=31;
	while(i>=0){

		bitmask=1<<i;

		res=num&bitmask;

		if(res==0){
			printf("0");
		}
		else{
			printf("1");
		}
	i--;
	}





}


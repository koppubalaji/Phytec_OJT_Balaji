


#include<stdio.h>

int maxmin(int arr1[5]){
	int max,min;	
	max=arr1[0];
	min=arr1[0];
	int i;


	for(i=0;i<5;i++){
		if(max<arr1[i])
			max=arr1[i];
	}
	for(i=0;i<5;i++){
		if(min>arr1[i])
			min=arr1[i];
	}

printf("%d",max);
printf("%d",min);
}

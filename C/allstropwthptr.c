


#include<stdio.h>
#include<string.h>





int max(int arr[10]){

	int max_val=arr[0],*p;

	p=&arr[0];
	int i;

	for(i=0;i<10;i++){
		if(max_val<*(p+i))
			max_val=*(p+i);
	}
	printf("Max value=%d\n",max_val);
	
}



int min(int arr[10]){

	int min_val=arr[0],*p;

	p=&arr[0];
	int i;

	for(i=0;i<10;i++){
		if(min_val>*(p+i))
			min_val=*(p+i);
	}
	printf("Min value=%d\n",min_val);
}


int char_len(char arr2[20]){

	char *p;
	p=arr2;
	int len=0,i;
	for(i=0;*(p+i)!='\0';i++){
		len++;
	}
	printf("string length=%d\n",len);

}

int char_rev(char arr2[20]){


	char *p;
	p=arr2;
	int i,j,len=0,x;
	len=strlen(arr2);
	int y=len;

	
	for(i=0;i<(len/2);i++){
		
		for(j=y-1;j>=y-1;j--)
		{
			x=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=x;
		}
		y--;
	}
	printf("reversed string=%s\n",arr2);

}



int str_cpy(char arr3[20],char arr4[20]){

	char *p1,*p2;
	p1=arr3;
	p2=arr4;
	int i;
	for(i=0;*(p1+i)!='\0';i++){

		*(p2+i)=*(p1+i);
	}
	*(p2+i)='\0';   //if we do not give this ,arr4 will output garbage values
	printf("source string %s\n",arr3);
	printf("destination string %s\n",arr4);


	

}


	


int str_cat(char arr3[20],char arr4[20]){


	int i,j;
	char *p1,*p2;
	p1=arr3;
	p2=arr4;
	
	int len;
	len=strlen(arr3);
	//arr3[len]='g';
	for(i=0,j=0;*(p2+j)!='\0';i++,j++){
			*(p1+i+len)=*(p2+j);
		}
	*(p1+i+len)='\0';
	
		


	printf("%s",arr3);	
}







int str_cmp(char arr3[20],char arr4[20]){


	int len1,i,count=0,len2;
	
	len1=strlen(arr3);
	len2=strlen(arr4);

	char *p1,*p2;
	p1=arr3;
	p2=arr4;
	if(len1==len2){
		for(i=0;*(p1+i)!='\0';i++){
			if(*(p1+i)==*(p2+i)){
				count++;
		}
		if(count==len1)
			printf("BOTH STRINGS ARE SAME");
		else
			printf("BOTH STRINGS ARE NOT SAME");
	}
	else{

			printf("BOTH STRINGS ARE NOT SAME");
	}

}












int main(){
	

	int arr[10]={79,77,77,77,74,75,73,74,75,76};

	int a=10;
	int b=20;
	int c=30;

	int *ptr1,*ptr2,*ptr3;

	ptr1=&a;
	ptr2=&b;
	ptr3=&c;

	printf("BEFORE ROTATION :%d\t%d\t%d\t\n",*ptr1,*ptr2,*ptr3);


	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;


	*ptr2=*ptr3+*ptr2;
	*ptr3=*ptr2-*ptr3;
	*ptr2=-*ptr3+*ptr2;


	printf("AFTER ROTATION :%d\t%d\t%d\t\n",*ptr1,*ptr2,*ptr3);


	max(arr);
	min(arr);
	

	char arr2[20];
	printf("Enter a String : \n");
	gets(arr2);
	char_len(arr2);

	char_rev(arr2);

	char arr3[20];
	
	printf("Enter a String : \n");
	gets(arr3);
	char arr4[20];
	
	printf("Enter a String : \n");
	gets(arr4);	
	str_cpy(arr3,arr4);



	
	str_cat(arr3,arr4);
	
	
	
	
	str_cmp(arr3,arr4);
	
}






#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int change_upper(char a[50]){
	int i,num;
	for(i=0;a[i]!='\0';i++){
	        	

		if(a[i] >= 97 && a[i] <=122){
			a[i]=a[i]-32;
		}

	}
}
int change_lower(char a[50]){
	int i,num;
	for(i=0;a[i]!='\0';i++){
	        	

		if(a[i] >= 65 && a[i] <=90){
			a[i]=a[i]+32;
		}
		
	}	
	

}
int swap_char(char a[50]){
	int i;
	for(i=0;a[i]!='\0';i++){
	        	

		if(a[i] >= 65 && a[i] <=90){
			a[i]=a[i]+32;
		}
		else if(a[i] >= 97 && a[i] <=122){
			a[i]=a[i]-32;
		
		}
	}	
	

}






int main(){

	char a[50];

	gets(a);
	
	
	int choice;
	printf("Enter a choice : ");
	scanf("%d",&choice);
	
	
	switch(choice){
		case 1:
			change_upper(a);
			printf("%s",a);
			break;	
		case 2:
			change_lower(a);			
			printf("%s",&a[0]);
			break;	
		case 3:
			swap_char(a);			
			printf("%s",&a[0]);
			break;
		case 0:
			exit(0);
		default:
			printf("TRY AGAIN");	
	}
	
}


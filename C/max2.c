#include<stdio.h>


int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	if(a>b && a>c){
		printf("%d",a);
	}
	if(b>c && b>a){

		printf("%d",b);
	}
	if(c>a && c>b){
		printf("%d",c);
	}
}



#include<stdio.h>

int reverse(int num){

	int a,b,c,d,e,f,g,h,rev_num;

	a=num<<28;
	b=((num&0x000000f0)<<20);
	c=((num&0x00000f00)<<12);
	d=((num&0x0000f000)<<4);
	f=((num&0x000f0000)>>4);
	g=((num&0x00f00000)>>12);
	h=((num&0x0f000000)>>20);
	e=num>>28;
	rev_num=a|b|c|d|e|f|g|h;

	printf("%x",rev_num);
}




int main(){

	int num=0x028365fa;

	printf("Enter a hexadecimal number : %x\n",num);

	//scanf("%x",&num);

	reverse(num);
}

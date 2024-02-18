#include<stdio.h>
#include"header9.h"



int main(){
		
	struct book b[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&b[i].bookid);
		__fpurge(stdin);
		gets(&b[i].bookname);
		gets(&b[i].authorname);
		gets(&b[i].subject);
	}


	fun9(b);
	return 0;
}

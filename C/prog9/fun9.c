
#include<stdio.h>
#include<string.h>
#include"header9.h"

void fun9(struct book b[5])
{

	int check_bookid;
	printf("Enter BOOK ID : ");
	scanf("%d",&check_bookid);
	for(int i=0;i<5;i++){
		if(check_bookid==b[i].bookid){
			printf("%s\n",b[i].bookname);
			printf("%s\n",b[i].authorname);
			printf("%s\n",b[i].subject);
		}
	}
		
}

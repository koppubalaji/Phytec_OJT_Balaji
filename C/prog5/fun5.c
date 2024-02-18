


#include<stdio.h>
#include<string.h>


int fun5(char a[5][50])
{

	//int j=0;
	char b[20][20];
	for(int i=0;i<5;i++){
		char* token=strtok(a[i],",");
		int j=0;
		while(token!=NULL)
		{
			strcpy(b[j],token);
		
			token=strtok(NULL,",");

			j++;
		}

		printf("user - %s\n",b[0]);
		printf("Surname - %s\n",b[1]);
		printf("City - %s\n",b[2]);
		printf("MObile %s\n",b[3]);
}
}

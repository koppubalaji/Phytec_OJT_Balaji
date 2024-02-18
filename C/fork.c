#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()

{

	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	pid_t pid;
	pid=fork();

	if(pid==0)
	{
		printf("this is child process\n");
		//sleep(2);
		if(a>b){
			printf("%d",a);
		}
		else{

			printf("%d",b);
		}
	}
	else
		printf("this is parent process\n");

}

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char* argv[])
{

/*for(int i=0;i<argc;i++)
{
	printf("%s\n",argv[i]);
}*/

int fd=open("abc.txt",O_RDONLY);
int fd2=fcntl(fd,F_DUPFD,1);

printf("%d",fd2);

}

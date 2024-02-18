#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd=open("abc.txt",O_RDWR);

	int flags=fcntl(fd,F_GETFL,0);

	flags=flags|O_APPEND;

	fcntl(fd,F_SETFL,flags);
	
	char buff[100]="dffgsefew";
	
	write(fd,buff,100);
}

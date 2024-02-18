#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{


	char buffer[100];
	char n;	
	int fd1=open("abc.txt",O_RDONLY);
	int fd2=dup2(fd1,6);
	printf("file descriptor is %d",fd2);
	n=read(fd1,buffer,5);
	write(1,buffer,n);
	n=read(fd2,buffer,5);
	write(1,buffer,n);
	n=read(fd2,buffer,5);
	write(1,buffer,n);
}
/*The dup2() system call performs the same task as dup(), but instead  of
       using  the lowest-numbered unused file descriptor, it uses the file de‐
       scriptor number specified in newfd.  If the file descriptor  newfd  was
       previously open, it is silently closed before being reused.*/


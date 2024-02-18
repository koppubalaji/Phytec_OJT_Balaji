#include<stdio.h>
int main()
{
#ifdef USE_SYSCALL
write(1,"hello system call",17);
#else
printf("hello world\n");
#endif
return 0;
}


/*
*  Proves that both the child and parent executes concurrently
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
   int cpid = fork();
   if (cpid == 0)
   {
      sleep(2);
      while(1) 
      {
	      //sleep(2);
	      putchar('x');
	      //fflush(stdout);
      }
   }
   else
   {
      sleep(2); 
      while(1)
      {
	      putc('o', stdout);
	      //fflush(stdout);
      }
   }
   return 0;
}

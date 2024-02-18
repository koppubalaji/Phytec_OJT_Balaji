/*
*  Describes what happens when fork() is called multiple times
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char  *argv[])
{
   if(argc!=2){
      printf("Must enter one agrument (an integer)\n");
      exit(1);
      //Calling exit(1) indicates that the program has terminated with an error or some kind of failure.
   }
   int n = atoi(argv[1]);
   int i;
   for (i=1;i<=n;i++)
      fork();
   printf("PHYTEC\n");
   exit(0);
   //When you call exit(0), it indicates that the program has terminated successfully or without encountering any errors.
}

/*
*  Describes  process tree
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	fp=fopen("fork.c","w");
   if(argc != 2){
      fprintf(stderr, "Incorrect number of arguments. Pl pass one integer\n");
      return 1;
   }
   pid_t cpid;
   int n = atoi(argv[1]);
   int i;
   for (i=1;i<=n;i++){
      fork();
}
   fflush(0);
   
   fprintf(fp,"PID=%ld, PPID=%ld\n",(long)getpid(), (long)getppid());
   fclose(fp);
   //while(1);
   return 0;
}

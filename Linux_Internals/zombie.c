#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//#include <sys/types.h>
//#include <sys/wait.h>
int main(){
   pid_t cpid = vfork();
   if (cpid == 0){
      printf("Terminating child with PID = %ld\n", (long)getpid());
      exit (0);
   }
   else{
      printf("Running parent, PID=%ld\n",(long)getpid());
      while(1);
  //sleep(20); 
      }

  
  return 0;
}

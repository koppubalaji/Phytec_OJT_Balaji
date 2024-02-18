#include <stdio.h>
#include <stdlib.h>
  
int main()
{
   char str[1000];
   FILE *fptr;
   printf("\n\n Create a file (test.txt) and input text :\n");
   printf("----------------------------------------------\n"); 
   fptr=fopen("test.txt","w");	
   if(fptr==NULL)
   {
      printf(" Error in opening file!");
      exit(1);
   }
   printf(" Input a sentence for the file : ");
   fgets(str, sizeof str, stdin);    //Pointer to a FILE object that identifies an input stream.
   fprintf(fptr,"%s",str);
   fclose(fptr);
   printf("\n The file %s created successfully...!!\n\n","test.txt");
   return 0;
}


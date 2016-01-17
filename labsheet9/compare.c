/* comparing two strings in commandline aurgument */

#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[])
{
  int i, j;
  
  for(i = 1; i < argc; i++)
   {
    for(j = i+1; j < argc; j++)
    {
      if(strcmp(argv[i],argv[j])==0)
      printf("argv[%d], argv[%d] is %s\n", i,j,argv[j]);
    }
   }
}
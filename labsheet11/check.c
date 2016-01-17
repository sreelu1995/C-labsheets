/* error checking the program */
/* question 4 */

#include <stdio.h>

int main( int argc, char *argv[])
{
  FILE *fp1, *fp2;
  int fp3;
  char name[30];

  fp1 = fopen(argv[1], "r");
  fp2 = fopen(argv[2], "w");

  if(fp1 == NULL)
  {
    printf("sorry , cannot create the file %s\n", argv[2]);
  }
  else
  {
    fscanf(fp1,"%s", name);
    fprintf(fp2,"%s",name);
    printf("mission accomplished\n");
   }
  
   fp3 =   fclose(fp1);
   fclose(fp2);
   printf("fclose returns %d\n",fp3);
}

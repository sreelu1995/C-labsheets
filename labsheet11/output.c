/* many command line arguments in files */
/* question 5 */

#include <stdio.h>

int main(int argc , char *argv[])
{
  FILE *fp1, *fp2;
  int i;
  char name[25];

  fp1 = fopen(argv[1],"a");
  
  for(i = 2; i < argc; i++)
  {
    fp2 = fopen(argv[i],"r");
    fscanf(fp2,"%s",name);
    fprintf(fp1,"%s\n",name);
    fclose(fp2);
  }
  fclose(fp1);
  printf("job done!\n");
}
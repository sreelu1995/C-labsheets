/* files */
/* question 2 */

#include <stdio.h>

int main(int argc , char *argv[])
{
  FILE *fp1, *fp2;
  
  char ch;

  fp1 = fopen(argv[1],"r");
  fp2 = fopen(argv[2],"w");
  
    while(fscanf(fp1,"%c",&ch) != EOF)
    {
      fprintf(fp2,"%c",ch);
    }
  fclose(fp1);
  fclose(fp2);
}
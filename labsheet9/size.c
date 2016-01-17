/* question 4 */
/* finding size of doubles and float, char and long double */

#include <stdio.h>
main()
{
  int i;
  char a[3];
  double b[3];
  float c[3];
  long double d[3];

  char *A;
  double *B;
  float *C;
  long double *D;
  
  A=a;
  B=b;
  C=c;
  D=d;

  printf("enter a character , double,float, long double 3 times iin order\n");
  for(i=0; i<3; i++)
  {
    scanf("%c%lf%f%LF",A,B,C,D);
    A++;
    B++;
    C++;
    D++;
  
  }
 for(i=0; i<3; i++)
  {
    printf("character %d\n double %d\n float %d\n long double %d\n",A,B,C,D); 
    A++;
    B++;
    C++;
    D++;
  
  }
  
}
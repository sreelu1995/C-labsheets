/* question 3 */
/* input form the user in function */

#include <stdio.h>
void input(char*, int*, float*);

main() {
  
  int age ;
  float income;
  char name[10];
  
  input(name,&age,&income);

  printf("hello %s, you are %d years old and you earn %2f per month. cool!\n",name,age,income);
}

void input(char *a,  int *b, float *c) {
  
  printf("enter your name\n");
  scanf("%s",a);

  printf("enter your age\n");
  scanf("%d",b);

  printf("enter your income\n");
  scanf("%f",c);
}

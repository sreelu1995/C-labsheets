/* question 9 */

/* reading string */

#include <stdio.h>

main()
{
  int i;
  
  char name[15], cond[50], bye;

  printf("What is your name?\n");

  scanf("%s", name);

  printf("Hello %s\n",name);

  printf("How are you today?\n");
  
  gets(cond);
  
  printf("%s ? , hmm.. okay then bye\n", cond);

  bye = getchar();

  for(i = 0; i < 5; i++)
  {
    bye = getchar();
     
    printf("%c", &bye);
  }
  
  printf("see you :)\n");
}
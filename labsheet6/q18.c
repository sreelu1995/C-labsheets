/* question 18 */

/* palindrome */

#include <stdio.h>
main()

{
  int i, j, p=1;
  char a[20];

  printf("enter a word\n");
  scanf("%s", a);

  for(i = 0; a[i] != '\0'; i++)
  {
  }

  for(j = 0; j < i/2; j++)
  {
    if(a[j]==a[i-j-1])
    continue;

    else
    {
      p = 0;
    }
    
  }
  
  if(p == 1)
  printf("it is a palindrome\n");
  
  else
  printf("it is not a palindrome\n");

}
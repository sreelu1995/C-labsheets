/* Question 29 */

/* capital letter, small case letter, digit or special symbol */

#include <stdio.h>

main()

{

  char ch;

  printf("Enter a character\n");

  scanf("%c",&ch);

  if((ch>=65)&&(90>=ch))

    printf("CAPITAL LETTER\n");

  else if((ch>=97)&&(122>=97))

   printf("SMALL LETTER\n");

  else if((ch>=48)&&(57>=ch))
   
   printf("NUMBER \n");

  else if((ch>=0)&&(47>=ch)&&(ch>=58)&&(64>=ch)&&(ch>=91)&&(96>=ch)&&(ch>=123)&&(127>=ch))

    printf("SPECIAL CHARACTERS\n");

 
}

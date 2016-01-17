/* question 6 */
/* catenation of two strings */

#include <stdio.h>
void stringcat(char*, char*);

main()
{
  char name[25], surname[10];
 
  printf("enter your name\n");
  scanf("%s",name);
 
  printf("enter your surname\n");
  scanf("%s",surname);
  
  stringcat(name,surname);

  printf("hi %s\n",name);
  
}

void stringcat(char *des,char *src)
{
  
  while(*des!='\0')
  {
    des++;
  }
  
    
  while(*src!='\0')
  {
    *des=*src;
    des++;
    src++;
  }
  *src='\0';
}

/* question 5 */
/* arrays of structures */

#include <stdio.h>
struct book {
 
 char title[20];
 char author[20];
 int pages;
 int year;

};
typedef struct book book;

main()
{
  book s[3];

 int i;

 for(i = 0; i < 3; i++)
 {
   printf("enter the name of the book\n");
  scanf("%s",s[i].title);

  printf("enter the name of the author\n");
  scanf("%s",s[i].author);

  printf("enter the no. of pages\n");
  scanf("%d",&s[i].pages);

  printf("enter the year of publishing\n");
  scanf("%d",&s[i].year);
 }

 for(i = 0; i < 3; i++)
  {
  printf("book %d title %s\n",i+1,s[i].title);

  printf("book %d author %s\n",i+1,s[i].author);

  printf("no of pages in book %d are %d\n",i+1,s[i].pages);

  printf("year of publishing of book %d is %d\n",i+1,s[i].year);

  }

}


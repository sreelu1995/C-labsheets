/* question 1 */
/* structutre of a book:bibliography */

#include <stdio.h>
struct book{
  char title[20];
  char author[20];
  int pages;
  int year;
};
typedef struct book book;
main()
{
  book s ={"cplusplus","anjali",577,2015};

  printf("book title %s\n",s.title);

  printf("book author %s\n",s.author);

  printf("no of pages are %d\n",s.pages);

  printf("year of publishing %d\n",s.year);
}
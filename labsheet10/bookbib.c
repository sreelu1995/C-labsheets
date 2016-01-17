/* question 1 */
/* strusture of book using string copy */

#include <stdio.h>
#include <string.h>
struct book{
  char title[20];
  char author[20];
  int pages;
  int year;
};
typedef struct book book;
main()
{
  book s;

  strcpy(s.title,"cplusplus");
  strcpy(s.author,"anjali");
  s.pages=577;
  s.year=2015;

  printf("book title %s\n",s.title);

  printf("book author %s\n",s.author);

  printf("no of pages are %d\n",s.pages);

  printf("year of publishing %d\n",s.year);
}

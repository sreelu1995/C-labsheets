/* initializing values using scanf */
/* question 3 */

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

  printf("enter the name of the book\n");
  scanf("%s",s.title);

  printf("enter the name of the author\n");
  scanf("%s",s.author);

  printf("enter the no. of pages\n");
  scanf("%d",&s.pages);

  printf("enter the year of publishing\n");
  scanf("%d",&s.year);

  printf("book title %s\n",s.title);

  printf("book author %s\n",s.author);

  printf("no of pages are %d\n",s.pages);

  printf("year of publishing %d\n",s.year);

}
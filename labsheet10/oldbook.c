/* question 5*/
/* function: oldest book */

#include <stdio.h>

struct book{ 
 
 char title[20]; 
 int year;

};
 typedef  struct book book;

int oldbook(book[],int);

main()

{
 book s[4];

 int i,k;

 for(i = 0; i < 4; i++)
 {
  printf("enter the title of book %d\n",i+1);
  scanf("%s", s[i].title);

  printf("enter the year of publishing of book %d\n",i+1);
  scanf("%d",&s[i].year);

  }

 k =oldbook(s,4);

 printf("the oldest book among all is book no.%d\n",k);
}

int oldbook(book a[], int l)
{
  int i, min, c=0;
  min=a[0].year;

  for(i = 0; i < l; i++)
  {
    if(a[i].year < min){
       c=(i+1);
   }

  }

 return c;

}

/* question 8 */
/* swap the co-ordinates */

#include <stdio.h>
struct point{
 int x, y;
};
typedef struct point point;

void swap(point* ,point*);

main()
{
 point a,b;

 printf("enter first co-ordinates\n");
 scanf("%d%d",&a.x,&a.y);

 printf("enter second co-ordinates\n");
 scanf("%d%d",&b.x,&b.y);
 
 swap(&a,&b);
 
 printf("first cordinates are now (%d ,%d)\n",a.x,a.y);
 printf("second cordinates are now (%d,%d)\n",b.x,b.y);
}

void swap(point *c, point *d)
{
 point temp;

 temp = *c;
 *c = *d;
 *d =temp;
 
} 

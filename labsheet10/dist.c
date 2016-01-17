/* question 7 */
/* distance b/w two points */

#include <stdio.h>
#include <math.h>

struct point{

  int x, y;

};
typedef struct point point;

double dist(point ,point);

main()
{
 point a, b;
 double k;

 printf("enter first co-ordinates\n");
 scanf("%d%d",&a.x,&a.y);

 printf("enter second co-ordinates\n");
 scanf("%d%d",&b.x,&b.y);

 k=dist(a,b);

 printf("distance between two points is %lf\n",k);
}

double dist(point c, point d)
{
  double a;

 a=sqrt(pow((d.x-c.x),2)+pow((d.y-c.y),2));

 return a;
}

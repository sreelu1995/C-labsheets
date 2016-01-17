/* slope of a line using structures */

#include <stdio.h>

struct point{
  float x, y;
};
typedef struct point point;

struct line{
  point p1, p2;
};
typedef struct line line;

float slope(line);

main()
{
  line l;
  float s;

  printf(" enter the cordinates of first point\n");
  scanf("%f%f", &l.p1.x,&l.p1.y);

  printf("enter the coordinates of the second point\n");
  scanf("%f%f", &l.p2.x,&l.p2.y);

  s = slope(l);

  printf("the slope of the line is %f\n", s);
}

float slope(line c)
{
  float p;

  p = (c.p2.y - c.p1.y)/(c.p2.x - c.p1.x);

  return p;
}
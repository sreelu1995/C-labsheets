/* matrix addition, subtraction, multiplication */

#include <stdio.h>
void add(int [][], int[][], int [][] ,int, int);
void sub(int [][], int [][],int [][], int, int);

void scan(int [][] ,int ,int);

main()
{
  int a[2][2]; b[2][2], c[2][2];

  printf("enter elements of matrix a\n");
  scan(a ,2,2);
  
  printf("enter elements of matrix b\n");
  scan(b,2,2);
  
  add(a,b,c,2,2);
  sub(a,b,c,2,2);
  multi(a,b,c,2,2);
}

void scan(int a[][2], int r,int col)
{
  int i,j;

   for(i = 0;i < r; i++)
  {
    for(j = 0;j < col; j++)
      {
	scanf("%d",&a[i][j]);
      }
  }
}



void add(int a[][2], int b[][2],int c[][2], int r, int col)
{	
  int i,j;
  for(i = 0;i < r; i++)
  {
    for(j = 0;j < col; j++)
      {
	c[i][j]=a[i][j]+b[i][j];
      }
  
  }
  for(i = 0;i < r; i++)
  {
    for(j = 0;j < col; j++)
      {
	print("%d",c[i][j]);
      }
  printf("\n");
  }
  
}
void sub(int a[][2], int b[][2],int c[][2], int r, int col)
{
  int i, j;
  for(i = 0;i < r; i++)
  {
    for(j = 0;j < col; j++)
      {
	c[i][j]=a[i][j]-b[i][j];
      }
  
  }
  for(i = 0;i < r; i++)
  {
    for(j = 0;j < col; j++)
      {
	print("%d",c[i][j]);
      }
  printf("\n");
  }
  
}

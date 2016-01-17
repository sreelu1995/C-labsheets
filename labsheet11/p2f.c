/* pointers to functions */

#include<stdio.h>

int host(int(*)(int,int));
int add(int, int);
int multi(int, int);

main()
{
   int z;
 
   z = host(add);
  
   printf("sum=%d\n",z);
  
   z = host(multi);

   printf("product = %d\n",z);

}

int add(int a, int b)
{
   return a+b;
}

int multi(int a,int b)
{
   return a*b;
}

int host(int(*pf)(int ,int))
{
   int a,b,k;

   printf("enter two no.s\n");
   scanf("%d%d",&a,&b);

   k=(*pf)(a,b);
   return k;
}

/* to find a particular key in an array */

#include <stdio.h>
main()
{
  int a[10],b =1, i ,j, key;
  
  printf("enter 10 numbers \n");

  for(i=0; i<10; i++){
    scanf("%d", &a[i]);
  }
  printf("enter a key you need to search\n");
  scanf("%d",&key);

  for(i=0; i<10; i++){
    for(j=i+j; j<10; j++){
      
      if(key == a[j])
      printf("key is found in position %d\n",j);
      b=0;

     
    }
    if(b==1)
     printf("key not found\n");
  }
}
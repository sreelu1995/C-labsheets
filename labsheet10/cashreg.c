/* pointer to structures: cash register */

#include <stdio.h>

struct cashregister{
  
  int tens, fives, ones;
};
typedef struct cashregister cashregister;

void init(cashregister*, int ,int ,int);

void add_notes(cashregister*, int ,int ,int);

void remove_notes(cashregister*, int ,int ,int);

int value(cashregister*, int ,int ,int);

void print(cashregister*, int ,int ,int);

main()
{
  cashregister c;

  printf("Select an option\n1.Load Notes\n2.Add notes\n3.Remove Notes\n4.Total value\n.5Inventory\n");

  while(
  
}
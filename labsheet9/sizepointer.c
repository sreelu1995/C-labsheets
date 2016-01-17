/* question 7 */
/* size of pointers */

#include <stdio.h>
main()
{
  printf(" size of integer pointer is %ld,\n character pointer is %ld,\n"
	  " float pointer is %ld,\n double pointer is %ld,\n void pointer is %ld\n",
	  sizeof(int*),sizeof(char*),sizeof(float*),sizeof(double*),sizeof(void*));
}
/* string concatenation using pointers */

#include <stdio.h>
#include <string.h>
void stringcat( char *dest, const char *source); 

main()
{
	char a[20], b[10];
	
	printf("enter two strings\n");
	scanf("%s%s",a,b);
	
	stringcat( a,b );
	
	printf(" new concatenated string is %s\n",a);
	
}

void stringcat( char *dest, const char *source)
{

	int l ;
	int i;
	
	l=strlen(dest);
	dest+=l;
	for(i = 0;i < l; i++)
	{
		*dest = *source;
		dest++;
		source++;
	}
}

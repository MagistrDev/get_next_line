#include <stdlib.h>
#include <stdio.h>
int main()
{
	char *s;
	
	s = (char*)malloc(5);
	if (s)
	{
		printf("aa");
	    //if (*s)
    	  printf ("%i", *(s+2));
    }
	return (0);
}
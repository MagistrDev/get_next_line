#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int main(int argc, char **argv) 
{
  int     fd;
  char    *s;

  s = NULL;
  if (argc != 2)
    return (0);
  fd = open(argv[1], O_RDONLY);
  printf("%s\n", s);
  if (get_next_line(fd, &s) > 0)
    printf("!%s\n", s);
  if (get_next_line(fd, &s) > 0)
    printf("!%s\n", s);  
  return 0;
}
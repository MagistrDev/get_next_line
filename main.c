#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int		*fd;
	int		i;
	char	*st;
	size_t	size;
	char	hop[20];
	
	argc--;
	if (argc)
		fd = (int*)malloc(sizeof(int) * argc);
	else
		write(1,"please input file name", 22);
	i = 0;
	if(!(st = (char*)malloc(BUFF_SIZE)))
		return(1);
	while (i < argc)
	{
		fd[i] = open(argv[i + 1], O_RDONLY);
		size = read(fd[i], st, BUFF_SIZE);
		printf("fd '%i' file - '%s' size '%d'\n", fd[i], argv[i + 1], size);
		write(1, st, size);
		i++;


	}
	return(0);
}
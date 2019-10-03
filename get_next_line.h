#ifndef GNL_H
# define GNL_H
# define BUFF_SIZE 100
# define ARR_SIZE 10

#include <stdlib.h>

typedef struct	s_file
{
	int				fd;
	size_t			ptr;
	char			buf[BUFF_SIZE];
	struct s_file	*next;

}				t_file;

int				get_next_line(const int fd, char **line);

#endif
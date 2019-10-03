#include "get_next_line.h"

void	ft_free_arr(char ***ar)
{
	size_t		i;

	i = 0;
	while (i < ARR_SIZE)
	{
		free(*ar[i]);
		ar[i] = NULL;
	}
}

int		get_next_line(const int fd, char **line)
{
	static char	*bb[ARR_SIZE];
	if (!bb[fd])
		if (!(bb[fd] = (char*)malloc(BUFF_SIZE + 1)))
			return (-1);



}
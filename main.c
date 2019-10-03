#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*st1;
	char	*st2;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	st1 = (char*)s1;
	while (*st1++)
		i++;
	st1 = (char*)s2;
	while (*st1++)
		i++;
	if (!(st1 = (char*)malloc(i + 1)))
		return (NULL);
	str = st1;
	st2 = (char*)s1;
	while (*st2++)
		*st1++ = *(st2 - 1);
	st2 = (char*)s2;
	while (*st2++)
		*st1++ = *(st2 - 1);
	*st1 = 0;
	return (str);
}

void	gnl(int fd, char **s)
{
	static char		*fr;
	char			*str;
	size_t			nums;
	static size_t	i;

	if (fr[i])
	{
		
	}
}

int main(int argc, char **argv)
{
	int			fd;
	static char	*s;
	

	if (argc != 2)
		return (0);
	if (!(s = (char*)malloc(BUFF_SIZE + 1)))
		return (-1);
	if (!(fd = open(argv[1], O_RDONLY)))
	{
		free(s);
		s = NULL;
		return (-1);
	}
	printf("1.%s\n",gnl(fd, s));
	printf("2.%s\n",gnl(fd, s));
	printf("3.%s\n",gnl(fd, s));
	printf("4.%s\n",gnl(fd, s));
	printf("5.%s\n",gnl(fd, s));
	printf("6.%s\n",gnl(fd, s));
	return(0);
}
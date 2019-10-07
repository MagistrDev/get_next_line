#ifndef GNL_H
# define GNL_H
# define BUFF_SIZE 0
# define ARR_SIZE 12000

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>


void	ft_strdel(char **as);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
int		ft_new_line(char **s, char **line, int fd, int ret);
int		get_next_line(const int fd, char **line);
char	*ft_strnew(size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
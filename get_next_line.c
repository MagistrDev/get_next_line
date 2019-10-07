#include "get_next_line.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	//unsigned char	ch;

	//ch = (unsigned char)c;
	str = (unsigned char*)s;
	while (*str)
	{
		if (*str == c)
			return ((char*)str);
		str++;
	}
	if (c == 0)
		return ((char*)str);
	return (NULL);
}

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*s;

	if (size + 1 < size)
		return (NULL);
	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	else
	{
		s = str;
		while (size-- + 1)
			*(s++) = 0;
	}
	return (str);
}

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
	if (!(st1 = (char*)malloc(i)))
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

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	char	*s2;
	char	*s3;

	if ((len + 1) == 0 || s == NULL)
		return (NULL);
	if (!(s1 = (char*)malloc(len + 1)))
		return (NULL);
	s3 = s1;
	s2 = (char*)s + start;
	while (len--)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = 0;
	return (s3);
}

char	*ft_strdup(const char *s)
{
	size_t		size;
	char		*str;

	size = 0;
	str = (char *)s;
	while (*str++ != 0)
		size++;
	size++;
	str = NULL;
	str = (char*)malloc(size);
	if (str == NULL)
		return (NULL);
	while (size--)
		str[size] = s[size];
	return (str);
}

int		ft_new_line(char **s, char **line, int fd, int ret)
{
	char	*tmp;
	int		len;

	len = 0;
	while (s[fd][len] != '\n' && s[fd][len] != '\0')
		len++;
	if (s[fd][len] == '\n')
	{
		*line = ft_strsub(s[fd], 0, len);
		tmp = ft_strdup(s[fd] + len + 1);
		free(s[fd]);
		s[fd] = tmp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s[ARR_SIZE];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (ft_new_line(s, line, fd, ret));
}
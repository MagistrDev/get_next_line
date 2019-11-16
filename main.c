/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <ecelsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 00:13:36 by ecelsa            #+#    #+#             */
/*   Updated: 2019/11/17 00:42:11 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 2)
	{
		if (!(fd = open(argv[1], O_RDONLY)))
			exit(-1);
		while (get_next_line(fd, &line) > 0)
		{
			printf("%s\n", line);
			ft_strdel(&line);
		}
		ft_strdel(&line);
		close(fd);
	}
	return (0);
}

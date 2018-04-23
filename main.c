/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperkhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:41:41 by sperkhun          #+#    #+#             */
/*   Updated: 2018/01/15 13:42:08 by sperkhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		fd1;
	int fd2;
	int fd3;
	int fd4;

	char	*line;
	int		n;

	n = 0;
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	fd3 = open(argv[3], O_RDONLY);
	fd4 = open(argv[4], O_RDONLY);
	// while ((n < 7))
	// {
	// 	get_next_line(fd, &line);
	// 	if (n == -1)
	// 		break ;
	// 	printf("___|%s|\n", line);
	// 	ft_bzero(line, ft_strlen(line));
	// 	free(line);
	// 	n++;
	// }
	// close(fd);
	
get_next_line(fd1, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd2, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd3, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd4, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd1, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd2, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd3, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd4, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd1, &line);
printf("___|%s|\n", line);
free(line);

get_next_line(fd2, &line);
printf("___|%s|\n", line);
free(line);

	system("leaks get_next_line");
	return (0);
}

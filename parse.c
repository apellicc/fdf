/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 00:50:45 by apellicc          #+#    #+#             */
/*   Updated: 2016/03/30 15:14:31 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_nbw(t_en *e, int fd)
{
	int		i;
	char	*tmp;

	i = 0;
	if (read(fd, NULL, 0) < 0)
		return (1);
	while (get_next_line(fd, &tmp) > 0)
	{
		if (*tmp == '\0')
			return (1);
		e->line++;
		if (e->line == 1)
			e->len_line = ft_nbword(tmp, ' ');
		else
			i = ft_nbword(tmp, ' ');
		free(tmp);
		if ((e->len_line != i && e->line > 1))
			return (1);
	}
	return (0);
}

void	ft_alloc(int fd, t_en *e)
{
	char	*tmp;
	char	**tmp2;
	int		y;
	int		x;
	int		i;

	y = 0;
	while (get_next_line(fd, &tmp) > 0)
	{
		tmp2 = ft_strsplit(tmp, ' ');
		free(tmp);
		if (!(e->m[y] = (int *)malloc(sizeof(int) * e->len_line)))
		{
			ft_putendl("error");
			exit(0);
		}
		i = -1;
		x = -1;
		while (++i < e->len_line)
			e->m[y][++x] = ft_atoi(tmp2[i]);
		y++;
		ft_tabfree(tmp2);
	}
	close(fd);
}

int		ft_parse(char *file, t_en *e)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (ft_nbw(e, fd) != 0)
	{
		ft_putendl("error");
		exit(0);
	}
	close(fd);
	if (!(e->m = (int **)malloc(sizeof(int *) * e->line)))
	{
		ft_putendl("error");
		exit(0);
	}
	fd = open(file, O_RDONLY);
	ft_alloc(fd, e);
	return (0);
}

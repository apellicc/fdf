/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 03:11:43 by apellicc          #+#    #+#             */
/*   Updated: 2016/03/27 12:54:07 by apellicc         ###   ########.fr       */
/*   Updated: 2016/03/23 22:46:49 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				get_next_line(int fd, char **line)
{
	static char	*s[1];
	char		*buff;
	char		*tmp;
	int			ret;

	tmp = NULL;
	fd > -1 && (read(fd, tmp, 0) >= 0) ? buff = malloc(BUFF_SIZE + 1) : NULL;
	if (fd > -1 && (read(fd, tmp, 0) >= 0))
		!s[fd] ? (s[fd] = ft_strnew(0)) :
		(tmp = ft_strchr(s[fd], '\n'));
	while (fd > -1 && line && !tmp && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		(tmp = ft_strjoin(s[fd], buff)) ? free(s[fd]) : NULL;
		s[fd] = tmp;
		tmp = ft_strchr(s[fd], '\n');
	}
	fd > -1 && (read(fd, tmp, 0) >= 0) ? free(buff) : NULL;
	if ((fd < 0 || ret < 0 || !line) || (!tmp && s[fd][0] == '\0'))
		return (!tmp && s[fd][0] == '\0' ? 0 : -1);
	*line = (tmp ? ft_strsub(s[fd], 0, tmp - s[fd]) : ft_strdup(s[fd]));
	s[fd] = (tmp ? ft_strcpy(s[fd], ++tmp) : ft_strdup("\0"));
	return (1);
}

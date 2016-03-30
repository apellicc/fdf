/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:42:13 by apellicc          #+#    #+#             */
/*   Updated: 2016/03/27 17:16:14 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		a;
	int		b;
	int		i;
	int		lol;
	char	**str;

	lol = -1;
	a = 0;
	i = -1;
	str = (char **)malloc(sizeof(char *) * (ft_nbword(s, c) + 1));
	if (!str)
		return (NULL);
	while (++lol < ft_nbword(s, c) && ++i >= 0)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c &&s[i] != '\0' )//&& s[i + 1] == '\0' && s[i] != '\0')
		{
			b = ft_lenword(s, c, i);
			str[a++] = ft_strsub(s, i, b);
			i = i + b - 1;
		}
	}
	str[a] = NULL;
	return (str);
}

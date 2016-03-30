/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:31:18 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 16:38:22 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim_c(char const *s, char c)
{
	char	*s1;
	int		len;
	int		rlen;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_searchc(s, c);
	rlen = ft_searchrc(s, c);
	if (rlen == 0)
		return ((char *)&s[len]);
	s1 = (char *)malloc(sizeof(char) * (rlen - len + 1));
	if (!s1)
		return (NULL);
	while (rlen >= len)
	{
		s1[i] = s[len];
		len++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:32:12 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/16 13:18:41 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*s1;
	int		len;
	int		rlen;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_searchwhitespace(s);
	rlen = ft_searchrwhitespace(s);
	if (rlen == 0)
		return ((char *)&s[len]);
	s1 = (char *)malloc(sizeof(char) * (rlen - len) + 1);
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

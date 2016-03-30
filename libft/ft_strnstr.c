/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:24:29 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 16:25:01 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && (ft_strlen(s2) + i - 1) < len)
	{
		if (s1[i] == *s2)
		{
			f = 0;
			while (s1[f + i] == s2[f] && (i + f) < len)
			{
				if (s2[f + 1] == '\0' || (i + f) == len - 1)
					return ((char *)s1 + i);
				f++;
			}
		}
		i++;
	}
	return (NULL);
}

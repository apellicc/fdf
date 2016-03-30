/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:30:48 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/16 13:17:37 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	while (s[start] != '\0' && len)
	{
		s2[i] = s[start];
		start++;
		i++;
		len--;
	}
	s2[i] = '\0';
	return (s2);
}

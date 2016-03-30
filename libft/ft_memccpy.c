/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:19:27 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/01 22:25:31 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	while (n != 0)
	{
		if (s2[i] == c)
		{
			s1[i] = s2[i];
			i++;
			return (&s1[i]);
		}
		s1[i] = s2[i];
		i++;
		n--;
	}
	return (NULL);
}

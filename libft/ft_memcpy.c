/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:26:10 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/01 23:26:30 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*s1;
	char	*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	i = 0;
	while (n)
	{
		s1[i] = s2[i];
		i++;
		n--;
	}
	return ((char *)dest);
}

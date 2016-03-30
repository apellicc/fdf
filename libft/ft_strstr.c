/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:25:43 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 16:30:41 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	f;
	int k;

	i = 0;
	f = 0;
	if (s2[f] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		k = i;
		f = 0;
		while (s1[k] == s2[f] && s1[k] != '\0')
		{
			k++;
			f++;
		}
		if (s2[f] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:20:49 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/16 13:16:25 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s1;

	i = 0;
	s1 = ft_strdup(s);
	if (!s1)
		return (NULL);
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			s1[i] = (*f)(s[i]);
			i++;
		}
	}
	return (s1);
}

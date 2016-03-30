/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:55:19 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 17:40:24 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_intcpy(int n, int t, int i)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i >= 0)
	{
		s[i] = (t % 10) + '0';
		t = t / 10;
		i--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

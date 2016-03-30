/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:06:31 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/17 17:03:34 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		neg;

	neg = 1;
	size = ft_intlen(n);
	str = malloc(sizeof(str) * size + 1);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[size] = '\0';
	if (n < 0)
	{
		neg = -1;
		str[0] = '-';
	}
	size--;
	while (n)
	{
		str[size] = (((n % 10) * neg) + '0');
		size--;
		n = n / 10;
	}
	return (str);
}

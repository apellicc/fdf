/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:12:01 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 16:12:08 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*s;

	s = (void *)malloc(size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}

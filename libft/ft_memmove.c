/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:27:26 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/16 16:00:35 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	const char	*src1;

	dst1 = dst;
	src1 = src;
	if (src1 < dst1)
	{
		while (len--)
			*(dst1 + len) = *(src1 + len);
	}
	else
		ft_memcpy(dst1, src, len);
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 15:33:03 by apellicc          #+#    #+#             */
/*   Updated: 2016/03/29 15:35:17 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memnew(size_t size)
{
	void	*s;

	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	ft_bzero((void *)s, size + 1);
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchrwhitespace.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:15:35 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 16:17:49 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_searchrwhitespace(char const *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i)
		i--;
	return (i);
}

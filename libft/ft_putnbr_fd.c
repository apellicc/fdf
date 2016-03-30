/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:33:47 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/01 23:34:01 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr_fd(int c, int fd)
{
	unsigned int	nb;

	nb = c;
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -c;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	if (nb < 10)
		ft_putchar_fd(nb + '0', fd);
}

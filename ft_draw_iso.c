/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_iso.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 12:32:29 by apellicc          #+#    #+#             */
/*   Updated: 2016/04/01 16:47:01 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_iso(t_en *e)
{
	int	y;
	int	x;

	y = -1;
	while (++y < e->line)
	{
		x = -1;
		while (++x < e->len_line)
			draw_iso2(e, y, x);
	}
}

void	draw_iso2(t_en *e, int y, int x)
{
	t_p	p1;
	t_p	p2;

	p1.x = (0 - ((e->len_line - x) * 5) + ((e->line - y) * 5)) *
	(9.0 / e->z) - e->mx;
	p1.y = (0 - (e->m[y][x] * (-e->pr)) - (((e->len_line - x) +
	(e->line - y)) * 3)) * (9.0 / e->z) - e->my;
	if (x < (e->len_line - 1))
	{
		p2.x = (0 - ((e->len_line - (x + 1)) * 5) + ((e->line - y) * 5)) *
		(9.0 / e->z) - e->mx;
		p2.y = (0 - (e->m[y][x + 1] * (-e->pr)) - (((e->len_line - (x + 1)) +
		(e->line - y)) * 3)) * (9.0 / e->z) - e->my;
		draw_line(e, e->img_iso, p2, p1);
	}
	if (y < (e->line - 1))
	{
		p2.x = (0 - ((e->len_line - x) * 5) + ((e->line - (y + 1)) * 5)) *
		(9.0 / e->z) - e->mx;
		p2.y = (0 - (e->m[y + 1][x] * (-e->pr)) - (((e->len_line - x) +
		(e->line - (y + 1))) * 3)) * (9.0 / e->z) - e->my;
		draw_line(e, e->img_iso, p2, p1);
	}
}

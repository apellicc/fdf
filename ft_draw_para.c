/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_para.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 12:32:36 by apellicc          #+#    #+#             */
/*   Updated: 2016/03/30 12:33:37 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_para(t_en *e)
{
	int	y;
	int	x;

	y = -1;
	while (++y < e->line)
	{
		x = -1;
		while (++x < e->len_line)
			draw_para2(e, y, x);
	}
}

void	draw_para2(t_en *e, int y, int x)
{
	t_p p1;
	t_p p2;

	p1.x = ((5 * x) - (1.2 * e->m[y][x])) * e->z + e->mx;
	p1.y = ((5 * y) - (0.8 * e->m[y][x])) * e->z + e->my;
	if (x < (e->len_line - 1))
	{
		p2.x = ((5 * (x + 1)) - (1.2 * e->m[y][x + 1])) * e->z + e->mx;
		p2.y = ((5 * y) - (0.8 * e->m[y][x + 1])) * e->z + e->my;
		draw_line(e, e->img_para, p1, p2);
	}
	if (y < (e->line - 1))
	{
		p2.x = ((5 * x) - (1.2 * e->m[y + 1][x])) * e->z + e->mx;
		p2.y = ((5 * (y + 1)) - (0.8 * e->m[y + 1][x])) * e->z + e->my;
		draw_line(e, e->img_para, p1, p2);
	}
}

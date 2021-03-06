/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:18:46 by apellicc          #+#    #+#             */
/*   Updated: 2016/04/01 23:26:41 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	get_data(t_en *e, t_im *img, int y, int x)
{
	if (e->c == 1)
	{
		y = y + S_P_H / 2;
		x = x + S_P_W / 2;
	}
	else 
	{
		y = y + S_I_H / 2;
		x = x + S_I_W / 2;
	}
	if (y < S_P_H && y >= 0 && (x < S_P_W) && x >= 0 && e->c == 1)
	{
		img->data[(img->bpl * y) + (4 * x) + 2] = 255 - e->c_r;
		img->data[(img->bpl * y) + (4 * x) + 1] = 255 - e->c_g;
		img->data[(img->bpl * y) + (4 * x)] = 255 - e->c_b;
	}
	if (y < S_I_H && y >= 0 && (x < S_I_W) && x >= 0 && e->c == 2)
	{
		img->data[(img->bpl * y) + (4 * x) + 2] = e->c_r;
		img->data[(img->bpl * y) + (4 * x) + 1] = e->c_g;
		img->data[(img->bpl * y) + (4 * x)] = e->c_b;
	}
}

void	draw_line(t_en *e, t_im *im, t_p p1, t_p p2)
{
	t_p		f;
	float	cumul;
	int		i;

	i = -1;
	f.x = p2.x - p1.x;
	f.y = p2.y - p1.y;
	cumul = sqrt((f.x * f.x) + (f.y * f.y));
	f.x = f.x / cumul;
	f.y = f.y / cumul;
	while (++i < cumul)
		get_data(e, im, p1.y + (f.y * (float)i), p1.x + (f.x * (float)i));
}

void	draw(void *v_e)
{
	t_en	*e;

	e = (t_en *)v_e;
	ft_bzero(e->img_para->data, S_P_H * S_P_W * 4);
	e->c = 1;
	draw_para(e);
	ft_bzero(e->img_iso->data, S_I_H * S_I_W * 4);
	e->c = 2;
	draw_iso(e);
	mlx_put_image_to_window(e->mlx, e->win_para, e->img_para->img, 0, 0);
	mlx_put_image_to_window(e->mlx, e->win_iso, e->img_iso->img, 0, 0);
}

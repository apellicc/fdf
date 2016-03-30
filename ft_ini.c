/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ini.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 16:02:13 by apellicc          #+#    #+#             */
/*   Updated: 2016/03/30 19:26:00 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_ini(t_en *e)
{
	int		endi;

	e->line = 0;
	e->z = 3;
	endi = 0;
	e->c_r = 215;
	e->pr = 1;
	if (!(e->mlx = mlx_init()))
		exit(0);
	e->img_iso = (t_im *)ft_memnew(sizeof(t_im));
	e->img_para = (t_im *)ft_memnew(sizeof(t_im));
	e->win_iso = mlx_new_window(e->mlx, S_I_W, S_I_H, "iso");
	e->img_iso->img = mlx_new_image(e->mlx, S_I_W, S_I_H);
	e->img_iso->data = mlx_get_data_addr(e->img_iso->img, &e->img_iso->bpp,
	&(e->img_iso->bpl), &endi);
	e->win_para = mlx_new_window(e->mlx, S_P_W, S_P_H, "para");
	e->img_para->img = mlx_new_image(e->mlx, S_P_W, S_P_H);
	e->img_para->data = mlx_get_data_addr(e->img_para->img, &e->img_para->bpp,
	&e->img_para->bpl, &endi);
}

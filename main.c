/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 02:10:58 by apellicc          #+#    #+#             */
/*   Updated: 2016/04/01 23:14:03 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	t_en	e;

	if (argc != 2)
		ft_putendl("error");
	if (argc != 2)
		return (0);
	ft_ini(&e);
	ft_parse(argv[1], &e);
	draw(&e);
//	mlx_put_image_to_window(e.mlx, e.win_para, e.img_para, 0, 0);
	mlx_hook(e.win_para, 2, 3, key, &e);
	mlx_hook(e.win_iso, 2, 3, key, &e);
	mlx_loop_hook(e.mlx, (void *)draw, &e);
	mlx_loop(e.mlx);
	return (0);
}

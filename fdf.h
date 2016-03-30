/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 02:31:51 by apellicc          #+#    #+#             */
/*   Updated: 2016/03/30 13:32:57 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "./libft/libft.h"
# include "./minilibx/mlx.h"
# include <fcntl.h>
# include "math.h"
# define S_I_W 1280
# define S_I_H 1440
# define S_P_W 1280
# define S_P_H 1440

typedef struct		s_im
{
	void			*img;
	int				bpp;
	int				bpl;
	char			*data;
}					t_im;

typedef struct		s_en
{
	int				**m;
	int				my;
	int				mx;
	void			*mlx;
	t_im			*img_iso;
	void			*win_iso;
	t_im			*img_para;
	void			*win_para;
	int				line;
	int				len_line;
	float			z;
	char			c;
	int				c_r;
	int				c_g;
	int				c_b;
}					t_en;

typedef struct		s_p
{
	float			y;
	float			x;
	float			z;
	unsigned int	c;
}					t_p;

void				draw(void *v_e);
int					ft_parse(char *file, t_en *e);
int					ft_nbw(t_en *e, int fd);
void				ft_alloc(int fd, t_en *e);
void				draw_iso(t_en *e);
void				draw_para(t_en *e);
void				get_data(t_en *e, t_im *img, int y, int x);
void				draw_line(t_en *e, t_im *im, t_p p1, t_p p2);
int					key(int kc, void *v_e);
void				ft_ini(t_en *e);
void				draw_iso2(t_en *e, int y, int x);
void				draw_para2(t_en *e, int y, int x);

#endif

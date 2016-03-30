/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:58:21 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/16 15:58:23 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*s;
	t_list	*ret;

	if (!lst || !f)
		return (NULL);
	s = NULL;
	while (lst)
	{
		if (!s)
		{
			s = (*f)(lst);
			ret = s;
			lst = lst->next;
		}
		else
		{
			s->next = (*f)(lst);
			lst = lst->next;
			s = s->next;
		}
	}
	return (ret);
}

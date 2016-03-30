/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:57:28 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/16 15:57:34 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**list_ptr;
	t_list	*lst;

	list_ptr = alst;
	if (!alst || !del)
		return ;
	while (*alst && del)
	{
		lst = *alst;
		*alst = (*alst)->next;
		(*del)(lst->content, lst->content_size);
		free(lst);
		lst = NULL;
	}
	(void)list_ptr;
	list_ptr = NULL;
}
